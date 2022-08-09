#include <iostream>
using namespace std;

int main() {
	int *p = new int;
	delete p; 
	// delete p likhne pe 4 bytes delete ho rahi hai jis pointer ko p points kar raha tha  . but remember pointer delete nii ho raha hai.
	p = new int;
	delete p;
	p = new int[100];
	delete [] p;
	/*
	// isme har loop me 4 bytes allocate hoti jaate hai stack me new pointer create hone  ki wajah se.
	while (true) {
		int *p = new int;
	}
	// baar baar 4 bytes allocate ho rahi hai new address me.
	while (true) {
		int i = 10;
	}
*/

}

