#include <iostream>
using namespace std;
#include "Student.cpp"


int main() {
	// Create objects statically
	Student s1;
	Student s2;

	Student s3, s4, s5;

	//s1.age = 24;
	s1.rollNumber = 101;
    // s1.age to likh nii sakte but humne class me essa function bna liya jo age return kar raha hai then with help of s1.rollNumber we can get the age 
	cout << "S1 age : " << s1.getAge() << endl;
	cout << "S1 Roll number : " << s1.rollNumber << endl;

	s1.display();
	s2.display();
	//s2.age = 30;
	// Create objects dynamicaaly
	Student *s6 =new Student ;
	//(*s6).age = 23;
	(*s6).rollNumber = 104;
    cout<<(*s6).rollNumber<<endl;
	cout << "S6 age : " << s6 -> getAge() << endl;
	(*s6).display();
	//s6 -> age = 23;
	//s6 -> rollNumber = 104;
    //s6 -> display();

}