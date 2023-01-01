
/*
3
3
2 2 1
4
3 1 2 1 -> 1 3 1 2
5
1 2 2 4 4
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int flag;
    list<string> l;
    while (x--)
    {
    flag=1;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= n - 1; i++)
        {
            sort(arr,arr+i+1);
            sort(arr+i+1,arr+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]>arr[i+1])
            {
            l.push_back("YES");
            flag=2;
            break;
            }
        }
        if(flag==2)
        break;
        }
        if(flag==1)
        l.push_back("NO");
    }
      for (string s : l)
    {
        cout << s <<endl;
    }
}