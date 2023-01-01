#include <iostream>
using namespace std;
#include "Fraction.cpp"

int main() {
	Fraction f1(10, 2);
	Fraction f2(15, 4);
// 1.
/*
 f1.print();
 ++f1;
 f1.print();
 */
 /*
output-->
10 / 2
6 / 1
*/


// 2.
 // now now if we want to assign the incremented value of f1 to other object 

    f1.print();
	Fraction f3 = ++f1;
	f1.print();
	f3.print();
	

/*
output-->
10 / 2
6 / 1
6 / 1
*/


	// 3.  if we call without reference (i.e simply be returning *this)

	/*
	f1.print();
	Fraction f3 = ++(++f1);
	f1.print();//output 6/1;
	f3.print(); // 7/1
*/


/*
output-->
10 / 2
6 / 1
7 / 1
*/


	// 3.  if we call by reference
/*	f1.print();
   Fraction& f3 = ++(++f1);
	f1.print();//output - 7/1, but  6/1 without by reference (&) return type 
	f3.print(); // 7/1
*/
/*
output-->
10 / 2
7 / 1
7 / 1
*/

 /*3 part ko samajne ke liye ye dekho 
int i=5; 
pehle 5 ki ek buffer system (temporary) me save hota hai uske baad humne dekha 5 ko store karne ke liye (i) hai to (i) ke block me 5 copy ho jaye gaa.

++(++f1) ke case me huum jab pehle ++f1 kiya.. to f1 ke block(address say 400) me '1' ka increment aaya(value becomes 6/1) and also *this ne incremnted value(6/1) return ki but  uss incremented value  ko kahi store nii kiya (means ek dusre l.h.s object me), to system ek buffer(say name x) me store kare ga use , fir ++ operator us buffer x pe apply hoga .. fir jo ek updated value aaye vo ek dusre buffer(y)(of different address as compared to x buffer) me store ho karke f3 me copy ho jaati hai (jis wajas se f3.print() me two times value incremented show hoti) ...but f1 one time hi increment hota hai.

// but agar hum by reference return type kare ge to buffer name(x and y) ki copy hi nii bane gii .. original block(f1 ka block) me hi value incremented hoye gi ..hence f1 bhi  2 times increment hoye ga and f3 also (f3 to hona hi tha two times incremented )


	//++f1;
	//f1.print();

	/*
	Fraction f3 = ++f1;
	f1.print();
	f3.print();
	*/
	/*
	Fraction f3 = f1.add(f2);
	Fraction f4 = f1 + f2;
	f1.print();
	f2.print();
	f3.print();
	f4.print();

	Fraction f5 = f1 * f2;
	f5.print();

	if(f1 == f2) {
		cout << "Equal" << endl;
	}
	else {
		cout << "Not equal " << endl;	
	}
	*/
}

