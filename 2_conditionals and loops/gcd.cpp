#include <iostream>
using namespace std;
// the greatest common factor of 15 and 10 is 5, since both the numbers can be divided by 5.
int main()
{
    int a, b, i = 2, gcd = 1, small;
    cout << "enter the two required numbers";
    cin >> a >> b;
    small = a;
    if (a < b)
    {
        if (b % small == 0)
        {
            cout << small;
        }
    }
    else if (b < a)
    {
        small = b;
        if (a % small == 0)
        {
            cout << small;
        }
    }
    while (i <= small)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
        i = i + 1;
    }
    cout << gcd;
    return 0;
}