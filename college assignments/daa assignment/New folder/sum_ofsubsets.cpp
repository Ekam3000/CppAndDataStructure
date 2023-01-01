#include <bits/stdc++.h>
using namespace std;
#define True 1
#define False 0
int inc[50], w[50], sum, n;
int promising(int i, int wt, int total)
{
    return (((wt + total) >= sum) && ((wt == sum) || (wt + w[i + 1] <= sum)));
}
void sumset(int i, int wt, int total)
{
    if (promising(i, wt, total))
    {
        if (wt == sum)
        {
            for (int j = 0; j <= i; j++)
            {
                if (inc[j])
                {
                    cout << w[j] << " ";
                }
            }
            cout << endl;
        }
        else
        {
            inc[i + 1] = True;
            sumset(i + 1, w[i + 1] + wt, total - w[i + 1]);
            inc[i + 1] = False;
            sumset(i + 1, wt, total - w[i + 1]);
        }
    }
}
int main()
{
    int n, total = 0;
    cout << "Enter the size of subset" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
        total += w[i];
    }
    cout << "Enter the sum value" << endl;
    cin >> sum;
    sort(w, w + n);
    if (total < sum)
    {
        cout <<"Not Possible"<<endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            inc[i] = 0;
        }
        cout << "The solution using Backtraking is :" << endl;
        sumset(-1, 0, total);
    }
    return 0;
}