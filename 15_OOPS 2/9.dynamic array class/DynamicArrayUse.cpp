#include <iostream>
using namespace std;
#include "DynamicArray.cpp"

int main() {
	DynamicArray d1;

	d1.add(10);
	d1.add(20);
	d1.add(30);
	d1.add(40);
	d1.add(50);
	d1.add(60);

	d1.print();

	DynamicArray d2(d1);		// Copy constructor , shallow copy karta , the changes which will be made in d1 will also be seeen in d2

	d1.add(0, 100);

	d2.print();  // copy constructor ki wajah se changes d2 me bhi reflect hui ..bcoz d2 ,d1 ka same address hai copy constructor ki wajah se. fir baad me deep copy karne ke baad class me , changes d2 me reflect nii honge
    d1.print();
	d2.add(0,200);  // d1 me changes nii honge d2 ki wajah se if deep copy is available . if deep copy not available then changes dono me dikhe ge .
	d2.print();
	d1.print();


// same for assignment operator as for copy constructor.
	DynamicArray d3;
	d3 = d1; // assignment operator bhi shallow copy karta hai the changes which will be made in d1 will also be seeen in d3
	d3.print();
}

