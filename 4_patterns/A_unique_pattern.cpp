#include <iostream>
using namespace std;
int main()
{
    int n;
    int j = 1;
    int l;
    cout << "number of rows:" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int k = 0; k < 5; k++)
            {
                cout << j<<" ";
                j++;
            }
             l = j;
            cout << endl;
        }
        else
        {
            for (int k = 0; k < 5; k++)
            {
                cout << l + 4<<" ";
                l--;
                j++;
            }
            cout << endl;
        }
    }
}
/*
number of rows:
4
1 2 3 4 5 
10 9 8 7 6
11 12 13 14 15 
20 19 18 17 16
*/