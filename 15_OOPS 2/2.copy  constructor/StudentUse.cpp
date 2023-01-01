#include <iostream>
using namespace std;
#include <string.h>
#include "Student.cpp"

int main() {
	char name[] = "abcd";
	Student s1(20, name); // s1 ke block me char *name ko heap ke memory ka address(heap ki memory ke first block ka address) mil rakha
	s1.display();

	Student s2(s1); // s2 ke block ka apna ek alag address hai different from s1 , but isme jo char* name ko jo address ki value mili hai vo same hai jo s1 object ke char*name ko value mili thi (kya value mili thi --> address of first block of heap memory)

	s2.name[0] = 'x';
	s1.display();
	s2.display();

	//if function Student(Student const &s) is not used in the class then output will be -->
	/* abcd 20
       xbcd 20
       xbcd 20
	*/
	
  // if function Student(Student const &s) is  used in the class then output will be -->
  /*
   abcd 20
   abcd 20
   xbcd 20
  */
}
