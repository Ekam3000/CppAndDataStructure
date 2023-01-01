#include <iostream>
using namespace std;
double fahsius(int s)
{
	return (5.0 / 9) * (s - 32);
}
int main()
{
	int a;
	char c;
	a = 1;
	c = (char)a;
	cout << c << endl;
	c = '0';
	a = c;
	cout << a << endl;
	float f = 1.2;
	//If the conversion is from a floating-point type to an integer type, the value is truncated (the decimal part is removed).
	//Some of these conversions may imply a loss of precision, which the compiler can signal with a warning. This warning can be avoided with an explicit conversion.
	a = f;
	c=f;
	cout << a << endl;
	cout << c << endl;
	a = 2;
	f = a; // implicit
	cout << f << endl;
	a = 1;
	f = a;
	cout << f << endl;
	float g = 1.2;
	a = (float)g;
	cout <<"a"<<a << endl;
	int p = 1001, j = 365, n;
	n = (p - 1) * j; // error results in wrong answer since integer range is excluded on multiplication
	n = (long)(p - 1) * j;
	// or
	// n=(p-1)*long(j);
	cout << n << endl;
	int i;
	cout<<"sizeof->" << sizeof(i)<< endl;
	i = long(j);
	cout << i << endl;
	cout<<"sizeof j->" << sizeof(j)<< endl;
	cout<<"sizeof i->" << sizeof(i)<< endl;
	int S, E, W;
	cout << "enter S,E,W:";
	cin >> S >> E >> W;
	for (S; S <= E; S = S + W)
	{
		double C;
		C = fahsius(S);
		cout << S << "\t" << C << endl;
	}
	/*
All the data types of the variables are upgraded to the data type of the variable with largest data type.
bool -> char -> short int -> int ->
unsigned int -> long -> unsigned ->
long long -> float -> double -> long double
*/
	// An example of implicit conversion
	int x = 10;	  // integer x
	char y = 'a'; // character c
	// y implicitly converted to int. ASCII
	// value of 'a' is 97
	x = x + y;
	// x is implicitly converted to float
	float z = x + 1.0;
	cout << "x = " << x << endl
		 << "y = " << y << endl
		 << "z = " << z << endl;
	/*Explicit Type Conversion: This process is also called type casting and it is user-defined. Here the user can typecast the result to make it of a particular data type.
	(type) expression
    where type indicates the data type to which the final result is converted.
    // C++ program to demonstrate
    // explicit type casting */
	double d = 1.2;
	// Explicit conversion from double to int
	int sum = (int)d + 1;
	cout << "Sum = " << sum;

/*
An important concept to understand in C++ is "casting." This is the phenomenon where a value is automatically converted to a different type in order to allow an operation to continue. For example, if you try to add together a floating point double value and an integer int value, the int will be converted to double first, and then the result of the addition will have type double as well.
explicit ->
 But if you save a double value to an int variable, the floating point value will be truncated to an integer*/
  int l = 2;
  double m = 3.5;
  std::cout << "This result will be a double with value 5.5: " << (l+m) << std::endl;
  
  int o = (l+m); // This expression is calculated as a double, but then it's cast back to int!
  std::cout << "This result will be an int with value 5: " << o << std::endl;
  return 0;
}

