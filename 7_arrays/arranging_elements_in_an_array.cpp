#include <iostream>
using namespace std;
int main()
{
    int n;
    int array[20];
    cin >> n;
    int i = 0;
    int val = 1;
    int n1;
    if (n % 2 == 0)
    {
        n1 = n / 2;
    }
    if (n % 2 != 0)
    {
        n1 = (n + 1) / 2;
    }
    while (i < n1)
    {

        cout << val << " ";
        val = val + 2;
        i++;
    }
    if (n % 2 != 0)
    {
        val -= 3;
    }
    if (n % 2 == 0)
    {
        val -= 1;
    }
    while (val >= 2)
    {
        cout << val << " ";
        val -= 2;
    }
}
/*input -5
1 3 5 4 2

10
1 3 5 7 9 10 8 6 4 2
*/