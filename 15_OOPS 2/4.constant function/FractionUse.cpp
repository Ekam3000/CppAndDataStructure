#include <iostream>
using namespace std;
#include "Fraction.cpp"

int main() {
	Fraction f1(10, 2);
	Fraction f2(15, 4);
	Fraction const f3;
// f3 constant object hai to f3 ke through hum kisi bhi function ko call nii kar sakte .. bcoz agar aapa ne agar function me ja kar koi changes kar di to dikkat ho jani .. but agr hum function par jaakatr const likh de to function constant ban jaye ga
	cout << f3.getNumerator() << " " << f3.getDenominator() << endl;
	f3.setNumerator(10); // ye line error dege agar isse rakha code me.
}
