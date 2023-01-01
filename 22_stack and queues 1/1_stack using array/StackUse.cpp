#include <iostream>
using namespace std;
#include "StackUsingArray.cpp"
// stack and queues are extract data type meaning hum apne data structures me ek specific order me hi elements ko insert kar sakte ,delete kar sakte. operations bohot hi ek specific order me defined hai.
int main() {
	StackUsingArray s(4);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50); // hame ek msg print hua show hoga stack is full
	cout << s.top() << endl; // 40
	cout << s.pop() << endl; // 40
	cout << s.pop() << endl;  // 30
	cout << s.pop() << endl;  //20
	cout << s.size() << endl; // 1
	cout << s.isEmpty() << endl; //0 means false
}