
// time complexity - nlogn
#include<iostream>
using namespace std;
void merge(int *arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m-l+1; // array 1 contains elements from index l to index of mid
    int n2 = r-m;
    int *L = new int[n1];
    int *R = new int[n2];
    // copy the elements from original array to new sub arrays
    for(i = 0; i < n1; i++)
    {
        L[i] = arr[l+i];
    }
    for(j = 0; j < n2; j++)
    {
        R[j] = arr[m+1+j];
    }
    i = 0;
    j = 0;
    k = l;
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int *arr, int n)
{
    int curr_size;
    int left_start;
    for(curr_size = 1; curr_size <= n; curr_size = 2*curr_size) // the value of curr_size indicates current size of the lists that are to be merged
    {
        for(left_start = 0; left_start < n-curr_size; left_start += 2*curr_size) // the window shifts by an length of 2*curr_size
        {
            // when first time this for loop  runs , we will merge 2-2 elements sequentially till the array ends
            // when second time this for loop  runs , we will merge 4-4 elements sequentially till the array ends . isme left_start=0 ,mid=1, right_end =3 hoga while call merge func .. then second time left_start=4,mid=5, right_end=7
            int mid = left_start + curr_size - 1;
            int right_end = left_start + 2*curr_size - 1;
            merge(arr, left_start, mid, right_end);
        }
    }
}
int main()
{
    cout << "Iterative Merge Sort\n";
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, n);
    cout << "Sorted array is: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}