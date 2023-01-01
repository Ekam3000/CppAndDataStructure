#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int partition(int *arr, int f, int r)
{
    int pivot = arr[r];
    int i = f-1;
    for(int j = f; j < r; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[r]);
    return i+1;
}
void quickSort(int *arr, int f, int r)
{
    if(f < r)
    {
        int p = partition(arr, f, r);
        quickSort(arr, f, p-1);
        quickSort(arr, p+1, r);
    }
}
int main()
{
    cout << "Recursive Quick Sort\n";
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter elements of array:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n-1);
    cout << "Sorted array is: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}