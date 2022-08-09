#include <iostream>
using namespace std;
int main() {
	int i = 10;
	int j = 21;
	int const * p = &i;
	cout<<*p<<endl;
	p = &j;
	cout<<*p<<endl;
	int * const p2 = &i; // now our pointer is a constant.
	(*p2)++;
	cout<<*p2<<endl;
	//p2 = &j; this thing i cant do.
	int const * const p3 = &i;
	//p3 = &j;
	//(*p3)++;
	//dono chije change nii kar sakte
}

