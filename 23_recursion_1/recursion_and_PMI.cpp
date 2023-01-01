/*PMI - principle of mathematical induction
1. base case : prove F(0) or F(1) is true.
2.induction hypothesis: assume F(k) is true for k.
3. induction strp: use 2. to prove F(k+1) is true.
*/

#include <iostream>
using namespace std;

int factorial(int n) {
	if (n == 0) {
		return 1;
	}
	int smallOutput = factorial(n - 1);
	int output = n * smallOutput;
	return output;
}

int main() {
	cout << factorial(4) << endl;
}
