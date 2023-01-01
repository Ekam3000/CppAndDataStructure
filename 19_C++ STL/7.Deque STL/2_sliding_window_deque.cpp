/*
given an array and an integer k,find the maximum number for each contiguous subarray of size k.
example
9-> nine elements in an array
1 2 3 1 4 5 2 3 6
3 -> the value of k

1 2 3 maximum - 3.
2 3 1 maximum - 3
3 1 4 maximum - 4
1 4 5 maximum - 5
4 5 2 maximum - 5
5 2 3 maximum - 5
2 3 6 maximum - 6
final array generated ->3 3 4 5 5 5 6
*/
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    int n;
    int a[15];
    int k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    deque<int> Q(k);
    int i;
    for( i=0;i<k;i++)
    {
        while(!Q.empty() &&a[i]>a[Q.back()])
        {
            Q.pop_back();
        }
        Q.push_back(i);
    }
// Process the remaining elements
    for(;i<n;i++)
    {
        cout<<a[Q.front()]<<" ";
        //1. remove the elements which are not the part of the window(contraction)
        while((!Q.empty() && (Q.front()<=i-k)))
        {
            Q.pop_front();
        }
        //2. Remove the elements which are not useful and are in window
        while(!Q.empty() && a[i]>=a[Q.back()])
        {
            Q.pop_back();
        }
        //3. add the new elements(Expansion)
        Q.push_back(i);
    }
    cout<<a[Q.front()]<<endl;
    return 0;
}