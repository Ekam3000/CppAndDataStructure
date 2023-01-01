/*extended principle of mathematical induction
1. base case : prove F(0) or F(1) is true.
2.induction hypothesis: assume F(i) is true (for all) i<= k.
3. induction strp: use 2. to prove F(k+1) is true.
*/
#include <iostream>
using namespace std;

int fib(int n) {
	if (n == 0) {
		return 0;
	}

	if (n == 1) {
		return 1;
	}

	int smallOutput1 = fib(n - 1);
	int smallOutput2 = fib(n - 2);
	return smallOutput1 + smallOutput2;
}

int main() {
	cout << fib(3) << endl;
}
