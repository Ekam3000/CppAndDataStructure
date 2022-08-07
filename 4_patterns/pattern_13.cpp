#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter n"  << endl;
	cin >> n;

	int i = n;
	while (i>=1) {
		int j=1;
        int k=i;
		while (j <= i) {
			cout <<k;
			j++;
		}
		cout << endl;
	    i--;
	}
}
/*Enter n
5
55555
4444
333
22
1
*/

