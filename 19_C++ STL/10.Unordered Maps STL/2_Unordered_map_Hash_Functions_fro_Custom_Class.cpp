#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;
/* u have to built a hash table  for the custom class. the key of the hashtable is a custom object , it is not the standard oone like string,char.
hashmap<student,int> h;
student-->custom key.
for executing custom key we need two things.
1.hash function
2. == (overloaded operator) for defining the two keys are equal and how.
*/
class Student
{
public:
    string firstname;
    string lastname;
    string rollno;
    Student(string f, string l, string no)
    {
        firstname = f;
        lastname = l;
        rollno = no;
    }
    bool operator==(const Student &s) const // as we are not doing any changes in the function so we have made it a const function
    {
        // rollno -rollno of our current student
        // s.rollno- rollno that we are given out.
        return rollno == s.rollno ? true : false;
        // if two students have same same prateek narang, but their roll numbers will be differnt( say one with 56 and other with 61) .. so if we are searching for the prateek narang (roll number 61). then while traversing through the given hashtable linked list ..then to ensure that we will stop our searhing at prateek narang (roll number 61) We use operator== for this.
    }
};
class HashFn
{ // hashFn is a function that will return us a number by size_t
public:
    // size_t is an unsigned datatype. it is used to represent size of some memory in bytes.
    // now i need to compute hash value of a particular person.
    size_t operator()(const Student &s) const
    {
        return s.firstname.length() + s.lastname.length();
    }
};
int main()
{
    unordered_map<Student, int, HashFn> student_map;
    Student s1("Prateek", "Narang", "010");
    Student s2("Rahul", "Kumar", "023");
    Student s3("Prateek", "Gupta", "030");
    Student s4("Rahul", "kumar", "020");
    // add student,marks to student_map
    student_map[s1] = 100;
    student_map[s2] = 120;
    student_map[s3] = 11;
    student_map[s4] = 45;
    // find the marks of student s4.
    // student_map[s4].second; 
    // this will give us the marks.
    cout<<student_map[s4]<<endl;
    // iterate over all the students.
    for (auto s : student_map)
    {
    // unordered_map is a pair in which Student is .first and int is .second
        cout << s.first.firstname << " " << s.first.rollno << endl
             << " Marks " << s.second << endl;
    }
    return 0;
}