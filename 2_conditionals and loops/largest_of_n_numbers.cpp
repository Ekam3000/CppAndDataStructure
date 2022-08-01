#include <iostream>
using namespace std;
int main()
{
    int max = -99999, n, n1, i = 1;
    cout << "how many numbers u want to print";
    cin >> n;
    while (i <= n)
    {
        cout << "enter respective required number";
        cin >> n1;
        if (n1 >= max)
        {
            max = n1;
        }
        i = i + 1;
    }
    cout << max;
    return 0;
}