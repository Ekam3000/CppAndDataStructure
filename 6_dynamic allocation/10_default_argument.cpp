#include <iostream>
using namespace std;
//  int si=0 is called the default value of argument, but u can give give any value to this other than 0 say 'd' , now your sum will starts g=from that 'd' value.
int sum(int a[], int size, int si=0) {
	int ans = 0;
	for (int i = si; i < size; i++) {
		ans += a[i];
	}
	return ans;
}
// also the initiation of default values starts from right most parameters.
int sum2(int a, int b = 0, int c = 0, int d = 0) {
	return a + b + c + d;
}
int getvalue(int x=0,int y=0,int z){ // this will return compilation array.
	return(x+y+z);
}
int main() {
	 int a[20];
	 // input code for a
	 cout << sum(a, 20) << endl;
	 cout<<sum2(10);
	 cout<<getvalue(10);
}

/*

#include <bits/stdc++.h>
using namespace std;

void print(int a, int b = 1, int c = 2, int d = 3)
{
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
}

int main()
{
    int a = 12, b = 13, c = 14, d = 15;
 
    //first function call
    cout << "only argument a passed\n";
    print(a);
 
    //second function call
    cout << "only arguments a,b passed\n";
    print(a, b);
 
    //third function call
    cout << "only arguments a,b,c passed\n";
    print(a, b, c);
 
    //fourth function call
    cout << "All arguments a,b,c,d passed\n";
    print(a, b, c, d);

    return 0;
}
Output:

only argument a passed
a: 12
b: 1
c: 2
d: 3
only arguments a,b passed
a: 12
b: 13
c: 2
d: 3
only arguments a,b,c passed
a: 12
b: 13
c: 14
d: 3
All arguments a,b,c,d passed
a: 12
b: 13
c: 14
d: 15

1) In the function definitions, if we declare default argument for one variable, then all the variables after that need to have default arguments.

Like below is not a valid function definition using default arguments and will throw compilation error,

int func(int a, int b=0, int c)
//This will throw error as b has assign default argument 
//value but c hasn't been though c comes after b.

//This it should be declared like:
int func(int a, int c ,int b=0)
*/