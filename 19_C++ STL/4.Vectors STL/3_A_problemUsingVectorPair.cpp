#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// sort the cars coordinates according to the distance they are from origin in accending order
bool compare(pair<int,int>a, pair<int,int>b)
{
    int d1= a.first*a.first+a.second*a.second;
    int d2= b.first*b.first+b.second*b.second;
    if(d1==d2)
    {
        return a.first<b.first;
    }
    return d1<d2;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for (int i=0; i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    /*
    or
     vector<pair<int,int>>v;
     for(int i=0; i<n;i++)
     {
         int x,y;
         cin>>x>>y;
         v.push_back(make_pair(x,y));
     }
    */
    sort(v.begin(),v.end(),compare);
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
    /*
    or
    for(auto c:v)
    {
        cout<<c.first<<" "<<c.second<<endl;
    }
    */
    return 0;
}
/*
4
1 0
2 3
2 1
0 1
*/