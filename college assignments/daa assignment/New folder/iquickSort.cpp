#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int *arr, int l, int h)
{
    int pivot = arr[h];
    int i = l-1;

    for(int j = l; j < h; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[h]);
    return (i+1);
}

void quickSort(int *arr, int n)
{
   int beg[n],end[n];
   int i=0;
   beg[0]=0;
   end[0]=n-1;
    while(i>= 0)
    {
      int p=beg[i];
      int r=end[i];
      i--;
        int q= partition(arr, p, r);
        if(q-1> p)
        {
            i++;
             beg[i]=p;
             end[i]=q-1;
        }
        if(q+1< r)
        {
             i++;
             beg[i]=q+1;
             end[i]=r;
        }
    }
}
int main()
{
    cout <<"Iterative Quick Sort\n";
    int n;
    cout <<"Enter size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter elements of array:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr,n);
    cout << "Sorted array is: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}