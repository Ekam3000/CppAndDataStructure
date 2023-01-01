#include<iostream>
using namespace std;
int binarySearch(int *arr, int f, int r, int data)
{
    while(f <=r)
    {
        int mid = (f+r)/2;
        if(arr[mid] == data)
        {
            return mid;
        }
        else if(arr[mid] > data)
        {
            r = mid-1;
        }
        else if(arr[mid] < data)
        {
            f = mid+1;
        }
    }
    return -1;
}

int main()
{
    cout << "Iterative Binary Search\n";
    int n; 
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter Sorted array:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int data;
    cout << "Enter element to search: ";
    cin >> data;
    int result = binarySearch(arr, 0, n-1, data);

    if(result == -1)
    {
        cout << data << " not found!!!";
    }
    else
    {
        cout << data << " found at index " << result;
    }
    return 0;
}