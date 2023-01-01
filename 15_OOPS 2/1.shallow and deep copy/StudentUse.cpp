#include <iostream>
using namespace std;
#include<cstring>
#include "Student.cpp"

int main() {
	char name[] = "abcd"; // suppose 780 address of ist element
	Student s1(20, name); // abcd copy hua 
	s1.display();

	name[3] = 'e'; // 780 ke address me change hui
	Student s2(24, name); 
	// as s1,s2 same name array of 780 address  ko point kar rahe to s2,s1 dono ke name me changes reflect honge jo char* name ke change honge.
	
	s2.display();
 //	1st time 
 s1.display();// without deep shallow output abce aaye gii.. 
 
 // without deep shallow dono object ek hi array address(first element)  ko point kar rahe to changes dono me dikhe gi.
 // but with deep shallow s1.display() me to pehle hi copy ho gya tha abcd copy.. ek new name ke array me .. phir chahe jitne marji changes karo (jaise name[3]='e' likha) si.display() karne se abcd hi aaye ga.
}
/*
abcd 20
abce 24
abcd 20
*/