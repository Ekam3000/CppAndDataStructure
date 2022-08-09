#include <iostream>
using namespace std;
#define PI 3.14
// define ki khass batt memory allocate karne ki jarurat ni, it saves memory, jab code compile ho raha hoga ... jaha jaha PI likha hai waha waha 3.14 se replace ho jaye ga.
int main() {

	int r;
	cin >> r;
// kisi ne esse likh diya 
//double PI=3.14;
// hai to ye bhi sahi but kisi ne agr PI  ki value change kar di pure code me value change ho jaye gi, secondly memory allocate karne pade gi.
	cout << PI * r * r << endl;

}

