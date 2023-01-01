// in insertion sort suffling takes place not swapping
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
        // ab to j ki value -1 ho gyi hai if we take take case i=1, then arr[j+1]=arr[0].
        arr[j + 1] = current;
        // example 
        // 10 5 1 4 3 9
        /*isme when current data value is 4 , arrar is like this 
        1 5 10 4 3 9
        comparing 4 with 10, 5, 1 we find 4 is less then 10 and 5 so we suffle them but 4 is 4 grater then 1 , so we break from the loop and at thst moment j value was 0 , so j+1 is 1 , so arr[j+1]= arr[1] = current 
        so modified array is
        1 4 5 10 3 9
        */
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