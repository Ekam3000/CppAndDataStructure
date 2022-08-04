#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int i = 1;
	while(i  <= n) {
		int j = 1;
		while (j <= n) {
			cout << j;
			j++;
			if (j > i) {
				break;
			}
		}
		cout << endl;
		i++;
	}
}
/*5
1
12
123
1234
12345
*/

