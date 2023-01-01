/* pairs such that the query is i<j
and  a[i]+a[j] >b[i] +b[j]
two arrays are given both of size n
*/
// samll manipulation a[i]-b[i]>b[j]-a[j]
// let me just given this is different name c[i]={a[i]-b[j]}such that we require now c[i]> -c[j] such that i<j. 

// given in question the elements of the two arrays can be duplicate.
// so we will use pairs.
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<pair<int,int>, null_type,less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update>
PBDS;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int c[n];
    cout<<"array a:"<<endl;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(int i=0;i<n;i++)
   {
       cin>>b[i];
   }
   for(int i=0;i<n;i++)
   {
     c[i]=a[i]-b[i];
   }

    PBDS St;
    int ans=0;
    for(int i=0;i<n;i++)
    {
       ans += St.size() -St.order_of_key({-c[i],100000});
       St.insert({c[i],i});
    }
    cout<<ans;
}
/*
5
4 8 2 6 2
4 5 4 1 3

4
1 3 2 4
1 3 2 4
*/
