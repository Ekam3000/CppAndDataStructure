#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    int rem;
    int arr[10];
    int i = 0;
    while (n > 0)
    {
        rem = n % 10;
        arr[i] = rem;
        for (int j = 0; j < i; j++)
        {
            if (rem == arr[j])
            {
                cout << rem << " "
                     << "is the repeated number";
                cout << endl;
                break;
            }
        }
        i++;
        n = n / 10;
    }
}

// enter number:1717
// 7 is the repeated number
// 1 is the repeated number
