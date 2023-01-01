/* inversion count--> pairs of indexes i and j, such that a[i]>a[j]  and i is less than j
i<j and a[i]>a[j]
 |          |
left of j   
in the
array how 
many elements
are there. 

so we will find insersion using PBDS 
merge sort technique can also be used to find inversion
*/

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
PBDS;
int main()
{
    int n;
    cin>>n;
    int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
    PBDS St;
    int inversion_count=0;
    for(int i=0;i<n;i++)
    {
      inversion_count +=(St.size()- St.order_of_key(a[i])); // this will give me how many elements are greater then a[i] and obvious that greater elements are inserted pehle  then a[i] so (condition i<j ) also satisfy.
      St.insert(a[i]); // isert for the first time when i=0
    }
    cout<<inversion_count; 
}
/*
7
1 5 2 3 6 4 10
*/


