#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number" << endl;
    cin >> n;
    int array[10];
    int i = 0;
    for (i; i < n; i++)
    {
        cin >> array[i];
        cout << endl;
    }
    int sum;
    cout << "enter required sum:";
    cin >> sum;
    int j = 0;
    for (j; j < n; j++)
    {
        int k = j + 1;
        for (k; k < n; k++)
        {
            if (sum == array[j] + array[k])
            {
                cout << "the elements which are producing a given sum:" << array[j] << " " << array[k] << endl;
            }
        }
    }
}