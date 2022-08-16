#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    /*int n;
    cin>>n;
    int *A =new int[n];
    for(int i=0;i<n;i++){
        cin>>A[i]
        cout<<"\t";
    }*/
    // Or
    int A[] = {-6, 3, -8, 10, 5, -7, -9, 12, -4, 2};
    int count = 0;
    int size = sizeof(A) / sizeof(A[0]);
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        while (A[i] < 0)
        {
            i++;
        }
        while (A[j] >= 0)
        {
            j--;
        }
        swap(A[i], A[j]);
        i++;
        j--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << "\t";
    }
}