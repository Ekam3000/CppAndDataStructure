#include<iostream>
using namespace std;
#include "Student.cpp"

int main() {
	// Create objects statically
	Student s1;
	Student s2;
	Student s3, s4, s5;
 // properties of object 
	s1.age = 24;
	s1.rollNumber = 101;
	cout << s1.age << endl;
	cout << s1.rollNumber << endl;
	s2.age = 30;
  

  // creating pointer->
   Student *p = &s1;
   p->age=25;
    cout <<"s1: age"<<p->age << endl;





	// Create objects dynamicaaly
	Student *s6 ; // a pointer is created
	s6 =new Student; // a object created in heap and pointer points to the allocated heap memory.
	//Or
	// Student *s6= new Student;
	(*s6).age = 23;
	(*s6).rollNumber = 104;
 // this pointer , which is another way of writing the above objects
	s6 -> age = 23;
	s6 -> rollNumber = 104;
	cout<<	s6 -> age<<endl;
	cout<<	s6 -> rollNumber;

}
