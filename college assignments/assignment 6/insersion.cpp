#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}
insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j;
        int current = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > current)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        // ab to j ki value -1 ho gyi hai if we take take case i=1 then arr[j+1]=arr[0].
        arr[j + 1] = current;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    printArray(arr, n);
}