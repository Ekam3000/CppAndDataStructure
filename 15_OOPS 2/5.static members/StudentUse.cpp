#include <iostream>
using namespace std;
#include "Student.cpp"

int main() {
	Student s1;

	Student s2;

	Student s3, s4, s5;
    //    s1.totalStudents yaa s2.totalStudents likhne se to hum eccess kar nii paye ge totalStudents ko bcoz objects ke pass to totalstudents ki copy hi nii hai. but kar bhi sakte hai illegal ni hai ye.
    
	  s1.totalStudents=20; // this initialise will overwrite the static variable value.
	cout<<s1.totalStudents<<endl;
	Student s6;
	cout<<s6.totalStudents<<endl;
	s1.gettotalStudent();
// static memebers ko hum esse access karte hai below li esse->
	 cout << Student :: totalStudents << endl;

	cout << Student :: getTotalStudent() << endl;
		cout<<s2.gettotalStudent()<<endl;

}

/*
Static Members 
• Static data members are members of a class
• Only one instance of static members is created and shared by all objects
• They can be accessed directly using class name
•
• Static members functions are functions of a class, they can be called using class name, without 
creating object of a class.
• They can access only static data members of a class, they cannot access non-static members 
of a class
*/