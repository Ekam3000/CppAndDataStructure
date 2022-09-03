#include <iostream>
using namespace std;
#include "Student.cpp"

// important -> only one constructor will be called at a time , at the time of the object initialisation
int main() {
  /*Student s1 is equivalent to s1.Student(); 
  and  by writing this from any of two all the members of the class gets garbage value*/
 /*default constructor-
 >same name as class
 >no return type
 >no input arguments */

	Student s1(10, 1001);
	cout << "Address of s1 : " << &s1 << endl;

	Student s2(20);
	s2.display();


	/*
	 Student s1; //this will search for the default constructor in the class if default constructor is not there then this line of code will through error.

	s1.display();

	Student s2;

	Student *s3 = new Student;
	s3 -> display();


	cout << "Parametrized constructors Demo" << endl;
	Student s4(10);

	s4.display();
 // dynamically bhi dekh lo jese banta hai parameterised

	Student *s5 = new Student(101);
	s5 -> display();

	Student s6(20, 1002);
	s6.display()
	*/
	
}