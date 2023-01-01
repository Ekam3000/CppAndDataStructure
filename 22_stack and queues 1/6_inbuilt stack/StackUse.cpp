#include <iostream>
using namespace std;
#include "StackUsingArray.h" // header files, these are normal files(library files) which can be used in any code , in header file we cannot use main() function
#include <stack> // inbuilt stack , ye stack bhi template se bna hai jab bhi hum is stack class ka object bnae ge so then specify karna pade ga vaha (int,char ..etc)


int main() {

	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);

	cout << s.top() << endl;
	s.pop(); // inbuilt stack pop function se value return ni karta 
	cout << s.top() << endl;
	cout << s.size() << endl;
	cout << s.empty() << endl;

	/*
	StackUsingArray<char> s;
	s.push(100);
	s.push(101);
	s.push(102);
	s.push(103);
	s.push(104);


	cout << s.top() << endl;

	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	cout << s.size() << endl;

	cout << s.isEmpty() << endl;
	*/
}

