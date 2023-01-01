#include <iostream>
using namespace std;
#include <cstdlib>
#include <stack>
#include <queue>

void display( queue<int> Q, stack<int> S1, stack<int> S2)
{
    if (!Q.empty())
    {
        while (!Q.empty())
        {
            int x = Q.front();
            Q.pop();
            cout << x << " ";
        }
        cout << endl;
    }
    if (!S1.empty())
    {
        while (!S1.empty())
        {
            int x = S1.top();
            S1.pop();
            cout << x << " ";
        }
        cout << endl;
    }
    if (!S2.empty())
    {
        while (!S2.empty())
        {
            int x = S2.top();
            S2.pop();
            cout << x << " ";
        }
        cout << endl;
    }
}
int main()
{
    stack<int> S1;
    stack<int> S2;
    queue<int> Q;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int j = 0;
    while (j < n)
    {
        if (S1.empty() || arr[j] < S1.top())
        {
            S1.push(arr[j]);
            display(Q,S1,S2);
        }
        else if (S2.empty() || arr[j] > S2.top())
        {
            S2.push(arr[j]);
             display(Q,S1,S2);
        }
        else
        {
            if (abs(((S1.top()) - arr[j])) < abs(((S2.top()) - arr[j])))
            {
                int k = 0;
                while (!S1.empty() && arr[j] >= S1.top())
                {
                    int x = S1.top();
                    Q.push(x);
                    S1.pop();
                    k++;
                }
                S1.push(arr[j]);
               display(Q,S1,S2);
                while (k)
                {
                    int l = k;
                    while (l--)
                    {
                        int x = Q.front();
                        Q.push(x);
                        Q.pop();
                    }
                    int y = Q.front();
                    S1.push(y);
                    k--;
                }
            }
            else
            {
                int k = 0;
                while (!S2.empty() && arr[j] <= S2.top())
                {
                    int x = S2.top();
                    Q.push(x);
                    S2.pop();
                    k++;
                }
                S2.push(arr[j]);
                 display(Q,S1,S2);
                while (k)
                {
                    int l = k;
                    while (l--)
                    {
                        int x = Q.front();
                        Q.push(x);
                        Q.pop();
                    }
                    int y = Q.front();
                    S1.push(y);
                    k--;
                }
            }
        }
        j++;
    }
    stack<int> s3;
    while (S2.size())
    {
        int x = S2.top();
        s3.push(x);
        S2.pop();
    }
    while (s3.size())
    {
        int x = s3.top();
        S2.push(x);
        s3.pop();
    }
    while (n--)
    {
        if (!S1.empty() && (S2.empty()) && (S1.top() < S2.top()))
        {
            int x = S1.top();
            Q.push(x);
            S1.pop();
           display(Q,S1,S2);
        }
        else if (!S1.empty() && (S2.empty()) && (S1.top() > S2.top()))
        {
            int x = S2.top();
            Q.push(x);
            S2.pop();
            display(Q,S1,S2);
        }
        else if (S1.empty())
        {
            int x = S1.top();
            Q.push(x);
            S1.pop();
             display(Q,S1,S2);
        }
        else
        {
            int x = S2.top();
            Q.push(x);
            S2.pop();
             display(Q,S1,S2);
        }
        return 0;
    }
}