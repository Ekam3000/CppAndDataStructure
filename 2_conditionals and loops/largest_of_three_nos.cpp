#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << "\n";
    if (a > b && a > c)
    {
        cout << "a is largest";
    }
    if (b > a && b > c)
    {
        cout << "b is largest";
    }
    else
    {
        cout << "c is largest";
    }
}