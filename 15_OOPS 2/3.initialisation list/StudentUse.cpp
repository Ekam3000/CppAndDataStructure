#include <iostream>
using namespace std;
#include "Student.cpp"

int main() {
	//Student s1;
     //	s1.age = 20;
	//s1.rollNumber = 101; ye chij hum nahi kar sakte bcoz rollNUmber ko const declare kar diya ..then fir ek bar jab s1 object create kiya to default constructor create ho jaye gaa jo s1 ko garbage values de dega (roll number ko garbage value mil gye ) uske badd appa rollNumber ko change ni kar sakte (s1.rollNumber =101;) nii likh sakte.
		Student s1(101, 20);
		//i.
		//s1.age=20;
		//ii.
         s1.age=23;
		cout<<s1.rollNumber<<" "<<s1.age<<" "<<s1.x;

}

