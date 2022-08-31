// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

 void g(int const & a) {
//	a++; // changes nii kar sakte a ke through ab bcoz of const 
 }

 void f( const int * p) {
//	(*p)++; // ab aapa (*p)++ ni kar sakte const ban gya naa vo so its becomes  read only . but without const keyword changes will appear.
 }

 int main() {
  // major benefit of const keyword in function calling 
	int j = 12;
	int* p3 = &j;
	f(p3);
	cout<<j<<endl;
	g(j);
	cout<<*p3<<endl;
	int const * p2 = &j;
	cout << *p2 << endl;
	 j++;
	//  j++ karne se *p2 pe changes bhi dikhe ge
	cout << *p2 << endl;

  //  ++(*p2); // pointer ko increment nahi kar sakte.

  // now this p2 pointer can point to some other variable also
  int y=10;
  p2 =&y;
  //but here also u cannot modify the data by ++(*p2)
  cout<<*p2<<endl;
  y++;
    cout<<*p2<<endl;


	int const i = 10;// this is correct way
	
	/*int const i;
	i=10;*/
    //this is wrong bcoz we hav written in the first line (int const i;) isse ek garbage value mil jaye gi i variable ko.. fir hum next line me i=10 kar rahe means aoan value change kar rahe hai which is not possible as i is const variable 

 //	i=12; //ab me dubara ye bhi ni likh sakta

	// int *p =&i; // this is wrong, u cannot store the address of a const int into a normal pointer , tumhare pass pehle hi read only pass path tha to tum *p ke through kese value change kar sakte ho . the pointer has to promise that it not change the by of i by (*p)++.
	
   int const * p = &i; // ye sahi hai
   // (*p)++ ; nii kar sakte ab

     int const j2 = 12;
	int const *k2 = &j2;
     /* j++ nii kar sakte , k2++ nii kar sakte */

 }

 //example 1-->
/*
// C++ program to illustrate return by reference
#include <iostream>
using namespace std;
  
// Function to return as return by reference
int& returnValue(int& x)
{
  
    // Print the address
    cout << "x = " << x
         << " The address of x is "
         << &x << endl;
  
    // Return reference
    return x;
}
  
// Driver Code
int main()
{
    int a = 20;
    int& b = returnValue(a);
  
    // Print a and its address
    cout << "a = " << a
         << " The address of a is "
         << &a << endl;
  
    // Print b and its address
    cout << "b = " << b
         << " The address of b is "
         << &b << endl;
  
    // We can also change the value of
    // 'a' by using the address returned
    // by returnValue function
  
    // Since the function returns an alias
    // of x, which is itself an alias of a,
    // we can update the value of a
    returnValue(a) = 13;
  
    // The above expression assigns the
    // value to the returned alias as 3.
    cout << "a = " << a
         << " The address of a is "
         << &a << endl;
    return 0;
}
Output:
x = 20 The address of x is 0x7fff3025711c
a = 20 The address of a is 0x7fff3025711c
b = 20 The address of b is 0x7fff3025711c
x = 20 The address of x is 0x7fff3025711c
a = 13 The address of a is 0x7fff3025711c
}
*/
// example 2-->
/*
// C++ program to illustrate return
// by reference
#include <iostream>
using namespace std;
  
// Global variable
int x;
  
// Function returns as a return
// by reference
int& retByRef()
{
    return x;
}
  
// Driver Code
int main()
{
    // Function Call for return
    // by reference
    retByRef() = 10;
  
    // Print X
    cout << x;
    return 0;
}
Output:
10
Explanation:
Return type of the above function retByRef() is a reference of the variable x so value 10 will be assigned into the x.
*/