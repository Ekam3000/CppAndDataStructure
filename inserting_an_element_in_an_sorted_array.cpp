#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1 - j; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}
int main()
{
    int i, j, size;
    cout << "Enter the size of the array";
    cin >> size;
    int a[size];
    cout << "Enter the elements";
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    bubbleSort(a, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << endl;
    }
    int location, number;
    cout << "Enter the location where you want to insert the number" << endl;
    cin >> location;
    cout << "Enter the element you want to insert" << endl;
    cin >> number;
    size++;
    int count = 0, k = 0;
    while (number > a[k++])
    {
        count++;
    }
    for (i = (size - 1); i > count; i--)
    {
        a[i] = a[i - 1];
    }
    a[count] = number;
    cout << "The element after insertion is ";
    for (i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}