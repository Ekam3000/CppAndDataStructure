#include <iostream>
using namespace std;
int main()
{
    int n, a = 0, b = 1, c;
    cout << "enter number:";
    cin >> n;
    cout << "the required fibonacci series is";
    while (a <= n)
    {
        cout << a << "\t";
        c = a + b;
        a = b;
        b = c;
    }
}