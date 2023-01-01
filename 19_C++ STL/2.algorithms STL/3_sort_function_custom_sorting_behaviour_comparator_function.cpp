// custom sorting behaviour , comparator function.
#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a, int b)
{
   cout<<" comparing a and b "<<a<<"\t"<<b<<endl;
    return a>b; // according to inbuilt sort function jab ye chij false hogi to swap ho jaye gi values.
     // a<b is for incresing order. 
}
// reason behind these two integer of compare function
// when two consecutive integers of container are compared in sort function compare function is called , if the condition returned by compare function is true , then the two container values get swapped in the sort function which is opposite from inbuilt sort function
// a typical inbuilt sort functgion looks like
/*
void sort(..parameters..)
for loop
{
    if(compare(a[j],a[j+1]))
    {
        swap mat kro
    }
    else
    swap karo.
}
*/
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
    // sort an array using sort() function, more efficient than the sorting algorithms  we have suited (if we dont include merge sort and quick sort)
    sort(arr, arr + n); // a combination of quick sort, heap sort and insertion sort.
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< "\t";
    }
    // sorting order in increasing order is automatic/inbuilt.. for formality we can also use comparators( a compare function) --> and doing couple of tasks 1.sort(arr, arr+n, compare) and in the compare function returning a<b. by doing this we will same get the array in increasing order.
    cout << endl;
    
    // decreasing order. we will use comparator function
    sort(arr, arr + n, compare); // we are passing a function as parameter. quite surprising. this function is called internally in the sort function.
    // and in the compare function we write while returning a>b.
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i] << "\t";
    }
}
 //   note--> the inbuilt comparator function in sort() works opposite to the normal  sorting function in which we work.
 
 //normal sorting function are like
 
 /*void sort(..parameters..)
for loop
{
    if(compare(a[j],a[j+1]))
    {
        swap
    }
}
*/
