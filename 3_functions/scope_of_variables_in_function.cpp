#include <iostream>
using namespace std;
int fact(int a)
{
    // cout<<n;
    int fact = 1, i = 1, n;
    cin >> n;
    for (; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    cin >> n;
    int output = fact(n);
    //   cout<<fact;
    // a is also local to function
    // cout<<a;
    cout << output << endl;
}