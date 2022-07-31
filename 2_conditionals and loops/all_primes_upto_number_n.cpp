#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    cout << "the prime numbers are:";
    for (m = 3; m <= n; m++)
    {
        int i = 2;
        int flag = 1;

        for (; i < m; i++)
        {
            if (m % i == 0)
            {
                flag = 2;
                break;
            }
        }
        if (flag == 1)
        {
            cout << m << endl;
        }
    }
    return 0;
}