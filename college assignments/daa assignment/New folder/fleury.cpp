#include <bits/stdc++.h>
using namespace std;
#define v 4
int checkBridge(int j, int start, int a[][v])
{
    int i;
    for (i = 0; i < v; i++)
    {
        if (a[j][i] == 1 and i != start)
        {
            if (a[i][start] == 1)
                return 1;
        }
    }
    if (i == v)
        return 0;
}
void fleury(int start, int a[][v])
{
    int visited[v][v] = {0};
    for (int j = 0; j < v; j++)
    {
        if (a[start][j] == 1 and visited[start][j] == 0)
        {
            int c = checkBridge(j, start, a);
            if (c == 1)
            {
                cout << j << " ";
                visited[start][j] = 1;
                a[start][j] = 0;
                fleury(j, a);
            }
        }
    }
}
int main()
{
    int a[v][v];
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            a[i][j] = 0;
        }
    }
    int e, v1, v2;
    cout << "Enter the number of edges" << endl;
    cin >> e;
    for (int i = 0; i < e; i++)
    {
        cout << "Enter the starting and ending edge " << i << endl;
        cin >> v1 >> v2;
        a[v1][v2] = 1;
        a[v2][v1] = 1;
    }
    int deg[v] = {0};
    for (int j = 0; j < v; j++)
    {
        for (int i = 0; i < v; i++)
        {
            if (a[j][i] == 1)
            {
                deg[j]++;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < v; i++)
    {
        if (deg[i] % 2 == 1)
        {
            cnt++;
        }
    }
    if (cnt > 2)
    {
        cout << "Not Possible " << endl;
    }
    int flag = 0, i, start;
    for (i = 0; i < v; i++)
    {
        if (deg[i] % 2 == 0)
        {
            continue;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        start = i;
    }
    else
    {
        start = 0;
    }
    fleury(start, a);
    return 0;
}