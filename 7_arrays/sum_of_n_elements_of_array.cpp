#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cin >> n;
    cout << endl;
    int array[20];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        sum += array[i];
        cout << endl;
    }
    cout << "the sum of n elements of an array is :" << sum;
}