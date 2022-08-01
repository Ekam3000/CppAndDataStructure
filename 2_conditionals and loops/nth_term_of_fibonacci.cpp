#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, n, c, i;
    cout << "enter the number whose value is to be find out in fibonacci:";
    cin >> n;
    for (i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << "the nth term value is:" << c;
}