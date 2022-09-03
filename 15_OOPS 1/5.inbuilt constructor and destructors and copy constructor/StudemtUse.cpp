#include <iostream>
using namespace std;
#include "Student.cpp"
int main() {
	
    Student s1(10, 1001);
    s1.display();
	//i.
	Student s2(20, 2001); 
 // now if we want to copy s1 in s2 then follow below code of lines. NOTE-> this time copy constructor cannot be used
 // copy assignment operator is used when both the objects have been allocated memory.

	s2 = s1; 
	// this is equivalent to
	//s2.age=s1.age;
    //s2.rollNumber=s1.rollNumber;
    cout << "S2 : ";
	s2.display();
	s2.rollNumber=12;
		s1.display();
		s2.display();
    s1.rollNumber=13;
        s1.display();
		s2.display();

	Student *s3 = new Student(30, 3001);
	*s3 = s1;
	//s2 = *s3;
	delete s3;  
	*s3=s2;
	s3->display();
	// without calling/writing the detele s3 , no destructor function will be called for s3. destructor will only be called for s1,s2.
	// delete s3 used for deleting the memory of s3 which was acquired be s3 in heap delete s3 will not destroy the pointer definition i.e it will pointer s3 exists and its data type is still Student/it can again be initialise to some other object(like s2 above) by assignment operator .dynamically allocated object ke liye destructor kamm karta hai .. it will only deallocate the s3 resouces and destroying the object s3.

// delete keyword is used for deleting the heap memory.this is also used for calling destructor for dynamically allocated objects.
 // if we used i. then this will be the output-->
 /* output-->
 this : 0x61fef4
Constructor 3 called !
10 1001
this : 0x61feec
Constructor 3 called !
S2 : 10 1001
10 1001
10 12
10 13
10 12
this : 0xf91348
Constructor 3 called !
Destructor called !
Destructor called !
Destructor called !
*/

// ii.
/*
  Student s1(10, 1001);
    s1.display();
	//copy constructor
    Student s2(s1); // this one is inbuilt copy constructor declared in main function
	//is line ka meaning ye hai ki s2 ka ek apna box bna jiska address dusre hai s1 ke address se and  usme s1 ke block me jo values padi thi  vo copy ho gyi. unn values ka address same hoga dono objects ke block me.
	cout << "S2 : ";
	s2.display();
	s2.rollNumber=12;
		s1.display();
		s2.display(); // changes done in s2 so it will reflect is s2
    s1.rollNumber=13;
        s1.display();
		s2.display();  // changes done in s1 so it will reflect is s1
	Student *s3 = new Student(30, 3001);
	*s3 = s1;
	s2 = *s3;
	delete s3;
*/


 // if we used ii instead of i then this will be the output-->
/*this : 0x61fef4
Constructor 3 called !
10 1001
S2 : 10 1001
10 1001
10 12
10 13
10 12
this : 0xfb1348
Constructor 3 called !
Destructor called !
Destructor called !
Destructor called !
*/



	/*
	Student s1(10, 1001);
	cout << "S1 : ";
	s1.display();

	// s2 ko s1 ki values deni hai->
 // s2.age=s1.age;
 // s2.rollNumber=s1.rollNumber;
       //OR
 //copy constructor -> it creates an object which is copy of some other object (s2 is copy of s1 object). and is called only at the time of creation of object.
	Student s2(s1);
	cout << "S2 : ";
	s2.display();

	Student *s3 = new Student(20, 2001);
	cout << "S3 : ";
	s3 -> display();
// copy constructor dynamically in which we have to pass dereferencing s3 not s3 in cse s3 is also dynamically defined.
	Student s4(*s3);

	Student *s5 = new Student(*s3);
	Student *s6 = new Student(s1);
	*/

}


