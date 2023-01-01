/*
#include<iostream>
using namespace std;
 bool compare(int a, int b)
 {

     return a<b;

 }
 int main()
 {
   int n;

    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;++i)
    {
        for(int j=i+i;j<n;++j)
        {
            if(compare(a[i],a[j]))
            {
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<n;++i)
    {
        cout<<a[i]<<",";
    }
 }
 // elements sorted in decreasing order
*/

/*
#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b)
 {
      return a<b;
 }
 int main()
 {
     int n;

    cin >> n;
    vector<pair<int,int> > a(n);

 for (int i = 0; i < n; i++)
    {
        cin >>a[i].first>>a[i].second;
    }
    for(int i=0;i<n;++i)
    {
        for(int j=i+i;j<n;++j)
        {
            if(compare(a[i],a[j]))
            {
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<n;++i)
    {
        cout<<a[i].first<<","<<a[i].second;
    }
    cout<<endl;
 }

  // elements sorted in decreasing order
 */
/*
#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b)
{

    if (a.first != b.first)
    {
        if (a.first > b.first)
            return true;
        return false;
    }
    else
    {
        if (a.second < b.second)
            return true;
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + i; j < n; ++j)
        {
            if (compare(a[i], a[j]))
            {
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        cout << a[i].first << "," << a[i].second << endl;
    }
    cout << endl;
}
*/
#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    else
    {
        return a.second > b.second;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), compare);
    for (int i = 0; i < n; ++i)
    {
        cout << a[i].first << "," << a[i].second<<endl;
    }
    cout << endl;
}
/*
6
4 3
5 5
5 3
25 6
7 9
8 5
*/
