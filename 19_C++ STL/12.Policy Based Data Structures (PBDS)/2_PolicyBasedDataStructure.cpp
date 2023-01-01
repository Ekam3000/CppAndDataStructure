/*#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
PBDS;
int main()
{
    // ignore 
  //  #ifndef ONLINE_JUDGE
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
 //   #endif
    // these four lines takes input from the user
    PBDS St;
    St.insert(15);
    St.insert(3);
    St.insert(10);
    St.insert(1);
    St.insert(4);
    St.insert(1);
    // kth largest element O9logn)
    for(int i=0;i<St.size();i++)
    {
        cout<<i<<" "<<*St.find_by_order(i)<<'\n';
    }
    cout<<St.order_of_key(5)<<'\n';  
}
*/
// for inserting duplicates values
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<pair<int,int>, null_type,less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update>
PBDS;
int main()
{
    // ignore 
   /* #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    // these four lines takes input from the user
    PBDS St;
    St.insert({15,0});
    St.insert({3,1});
    St.insert({10,2});
    St.insert({1,4});
    St.insert({4,3});
    St.insert({1,5});
    // kth largest element O(logn)
    for(int i=0;i<St.size();i++)
    {
        cout<<i<<" "<<St.find_by_order(i)->first<<" "<<St.find_by_order(i)->second<<'\n';
    }
}