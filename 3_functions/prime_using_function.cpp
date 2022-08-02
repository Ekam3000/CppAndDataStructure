#include <iostream>
using namespace std;

bool isPrime(int n)
{
    int d = 2;
    while (d < n)
    {
        if (n % d == 0)
        {
            return false;
        }
        d++;
    }
    return true;
}

int main()
{
    int n;
    char c;
    do
    {
        cout << "enter number :";
        cin >> n;
        bool ans = isPrime(n);
        cout << ans << endl;
        cout << "do u want to continue: y or n" << endl;
        cin >> c;
    } while (c == 'y');
}
