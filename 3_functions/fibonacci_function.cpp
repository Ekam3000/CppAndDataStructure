#include <iostream>
using namespace std;
void fibonacci(int n)
{
    int a = 0, b = 1, c;
    int i = 1;
    while (i <= n)
    {
        cout << a << "\t";
        c = a + b;
        a = b;
        b = c;
        i++;
    }
}
int main()
{
    int n;
    cout << "enter a number for a given fibonacci series:";
    cin >> n;
    fibonacci(n);
}