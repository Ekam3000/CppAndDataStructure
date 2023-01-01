#include <bits/stdc++.h>
using namespace std;
struct ab
{
    int w, v; // weight and value(profit)
    double r;
};
bool cmp(ab x, ab y)
{
    return x.r > y.r;
}
int main()
{
    int n, w1;
    cin >> n;
    cin >> w1; // given knapsack capacity 
    ab arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].v >> arr[i].w;
        arr[i].r = arr[i].v/arr[i].w; // profit by weight ratio
    }
    sort(arr, arr + n, cmp);
    double fin = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].w + sum <= w1)
        {
            sum = sum + arr[i].w;
            fin = fin + arr[i].v;
        }
        if (sum == w1)
        {
            break;
        }
        if (arr[i].w + sum > w1)
        {
            double rem = w1 - sum;
            double x = rem/arr[i].w * double(arr[i].v);
            fin = fin+x;
            break;
        }
    }
    cout << fin;
}