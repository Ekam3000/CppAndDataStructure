#include <iostream>
using namespace std;

int main() {
	// constant int
	const int i = 10;
	int const i2 = 10;
	// ye dono same ways hai const key ko use karne ke.
	// constant reference from a non const int
	int j = 12;
	const int & k = j;// ab agar reference me const keyword lga diya to aapa ab k++ nii kar sakte(means k ke path ke through hum changes ni kar sakte(us block ki value me)) . but jo bhi changes j ke path ke  thorugh karo ge vo k me reflect jarur hogi hi which is obvious .
	j++;
	cout << k << endl;
	// constant reference from a const int
	int const j2 = 12;
	int const *k2= j2;
     /* j++ nii kar sakte , k2++ nii kar sakte */
	// reference from a const int
	int const j3 = 123;
	int & k3 = j3;  // jab j3 ke pass hi sirf read access hai to k3 kese use overwrite karte kuch aur kar sakta hai . so k++ possible hi nii hai. error 24 line me hi aa jaye ga.
	k3++;
}

