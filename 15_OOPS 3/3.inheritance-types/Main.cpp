#include <iostream>
using namespace std;
#include "Student.cpp"
#include "Teacher.cpp"
#include "TA.cpp"


int main() {
	TA a; // jab maine TA ka object bnaya .. to teacher aur student mese sabse pehle kiska constructor call hoga ?
	// ans - jo class humne pehle likhi hai(class TA: ke baad) uska constructor pehle call hoga baad me second wale ka


// in case TA class have no print function and teacher and student class have prift function then in case if we call prinf function through TA object as (a.print();) to ye erroe maar dega bolega kiska print function output me du teacher or student .. to hame fir specify karna pade ga esse -

//	a.Student :: print();

	a.print(); // agar TA ka pass apna print() function hoga to usi ka call hoga obvious

//	a.name ="abcd";
//same problem as print() function  ...so specify karna pade ga
	a.Teacher :: name = "abcd";

}

// teacher ,student,TA performs multiple inheritance.