#include <iostream>
using namespace std;
#include "Fraction.cpp"

int main() {
	Fraction f1(10, 2);
	Fraction f2(15, 4);
 // f1 is calling the function add , so this pointer ke passs f1 ka address chala gya so this pOINTER f1 ki values ko use bhi kar sakta ,chanfe bhi kar sakta ..but f2 object ki values hame dene pade gi.
	f1.add(f2);

	f1.print();
	f2.print();

	f1.multiply(f2);
	f1.print();
	f2.print();


}

