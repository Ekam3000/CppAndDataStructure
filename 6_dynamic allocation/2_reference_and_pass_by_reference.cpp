#include <iostream>
using namespace std;
//int i=4;
//int &k=i;
//in do upar ki lines ka ye meaning hai ki int i name ka block bna usme value 4 place kar de, and then usi block ka name k bhi ko gya jab humne int&k=i; likha ..( a same memory block has named i and k) k ke liye new memory block nii bna .. jo changes k ki value me karo ge (i) me bhi vo changes dikhe gi  and vice versa.
void increment(int& i) {
	//pass by reference kar rahe ho to jo i me changes hoe gi vo main ke i me reflect hoye gii..
	i++;
}
// ek function ke local vaarible ka agar hum reference yaa pointer return karwa rahe hai main function me to galti kar rahe hai kyuki jaise hi vo function calling khatam hoe gi main function me vaise hi local variable ki memory/address finish..
// bad practice
int& f(int n) {
	int a = n;
	return a;
}
// bad practice
int* f2() {
	int i = 10;
	return &i;
}
int main() {
	int i;
	i = 10;
	int j=i;
	i++;
	cout<<j<<endl;
	int& j = i; // this implies j is just a reference variable j is just reference to the existing memory of i, j is not creating its know new memory.
	i++;
	cout << j << endl;
	j++;
	cout << i << endl;
	int k = 100;
	j = k; // i and j both will gets changed to 100
	cout << i << endl;
	/*int i=10; or int i;
	                i=10;
	both are same thing 
	but int &j=i; and int &j;
                       j=i;
      are different and only first one is right/true.*/
	increment(i);
	cout << i << endl;
	int& k1 = f(i);
   int* p = f2();
}