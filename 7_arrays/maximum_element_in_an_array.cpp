#include <iostream>
using namespace std;
int main()
{
    int n;
    int max = -99999;
    cin >> n;
    cout << endl;
    int array[20];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        cout << endl;
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << "the maximum array among the array is :" << max;
}