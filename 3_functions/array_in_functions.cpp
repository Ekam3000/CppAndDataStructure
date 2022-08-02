#include <iostream>
using namespace std;
void printArray(int input[], int n)
{
    // the size of array in function defination will be 8 , bcoz the variable input
    // stores the address of the array for that 8 bytes memory is required.
    // cout<<"size in function:"<<sizeof(input);
    cout << "print array:";
    for (int i = 0; i < n; i++)
    {
        cout << input[i];
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int input[100];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
        cout << endl;
    }
    cout << "size in main:";
    cout << sizeof(input);
    cout << endl;
    printArray(input, n);
}