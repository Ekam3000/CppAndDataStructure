#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of vertices" << endl;
    cin >> n;
    int arr[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            arr[i][j] = 0;
        }
    }
    int e;
    cout << "Enter the number of edges" << endl;
    cin >> e;
    int start, end;
    for (int i = 1; i <= e; i++)
    {
        cout << "Enter the starting and ending vertex " << i << endl;
        cin >> start >> end;
        arr[start][end] = 1;
        // arr[end][start] = 1;
    }
    int sum = 0;
    int arr1[n] = {0};
    cout << "Indegree----->>" << endl;
    for (int j = 1; j <= n; j++)
    {
        sum = 0;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i][j] == 1)
            {
                sum++;
            }
        }
        arr1[j] = sum;
        cout << "vertex " << j << " " << sum << endl;
    }
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (arr1[i] == 0)
        {
            q.push(i);
            arr1[i] = -1;
        }
    }
    // int a=q.front();
    // cout<<a<<" ";
    while (!q.empty())
    {
        int a = q.front();
        cout << a << " ";
        q.pop();
        for (int j = 1; j <= n; j++)
        {
            if (arr[a][j] > 0)
            {
                arr1[j]--;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (arr1[i] == 0)
            {
                q.push(i);
                arr1[i] = -1;
            }
        }
    }
    return 0;
}
/*
Enter the number of vertices
6
Enter the number of edges
6
Enter the starting and ending vertex 1
5 2
Enter the starting and ending vertex 2
5 0
Enter the starting and ending vertex 3
4 0
Enter the starting and ending vertex 4
4 1
Enter the starting and ending vertex 5
3 1
Enter the starting and ending vertex 6
2 3
Indegree----->>
vertex 1 2
vertex 2 1
vertex 3 1
vertex 4 0
vertex 5 0
vertex 6 0
4 5 6 2 3 1
*/