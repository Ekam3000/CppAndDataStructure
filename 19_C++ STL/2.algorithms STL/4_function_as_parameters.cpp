#include<iostream>
using namespace std;
 bool compare(int a, int b)
 {
     cout<<"comparing a and b"<<a<<"\t"<<b<<endl;
     return a>b; // assending order.
 }
 // bubble sort
 void bubble_sort(int a[], int n, bool (&cmp)(int a, int b))
 //bool (&cmp)(int a, int b),this is how we write if we pass function as parameter(from the main function) to the bubble_sort,  bool is the return type
 {
     // n-1 comparisons
     for(int itr=1;itr <=n-1;itr++)
     {
         for(int j=0; j<=(n-itr-1);j++)
         {
             if(cmp(a[j],a[j+1]))
             {
                 swap(a[j],a[j+1]);
             }
         }
     }
 }
 int main()
 {
   int n, key;
    cout << "size of the array:" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr,n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
 }