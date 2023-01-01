//we will use recursion jab koi ek problem (ya koi given input ka function) absolutely same nature ki problem par(same function par) but with a samller input size

#include <iostream>
using namespace std;

int factorial(int n) {
	cout << n << endl;
	if (n == 0) {
		return 1;
	}
	int smallOutput = factorial(n - 1);
	return n * smallOutput;
}

int main() {
	int n;
	cin >> n;
	int output = factorial(n);
	cout << output << endl;
}
