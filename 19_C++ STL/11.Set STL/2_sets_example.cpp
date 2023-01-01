#include<iostream>
#include<set>
#include<climits>
using namespace std;

int main()
{
    set<pair<int,int>> s;
    s.insert(make_pair(10,5));
    s.insert(make_pair(12,6));
    s.insert(make_pair(14,7));
    s.insert(make_pair(15,8));
    s.insert(make_pair(17,4));
    s.insert(make_pair(15,3));
    s.insert(make_pair(1,2));
    s.erase(s.find(make_pair(14,7)));
cout<<"if we want a key which is atleast 15"<<endl;
auto it2=s.upper_bound(make_pair(15,INT_MAX));
cout<<it2->first<<" "<<it2->second<<endl;
cout<<"upper bound:"<<endl;
auto it=s.upper_bound(make_pair(15,3));
cout<<it->first<<" "<<it->second<<endl;
cout<<"lower bound:"<<endl;
auto it1=s.lower_bound(make_pair(15,3));
cout<<it1->first<<" "<<it1->second<<endl;
// sorting occurs on basis of first value ..if first value is same then we will check for second vaue.
    for(auto p:s)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}