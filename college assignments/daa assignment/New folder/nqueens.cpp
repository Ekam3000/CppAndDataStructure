#include <iostream>
using namespace std;
int x[] = {0, 0, 0, 0, 0};
void display(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}
bool place(int k, int i)
{
    for (int j = 1; j < k; j++)
    {
        if (x[j] == i || abs(x[j] - i) == abs(k - j))
        {
            return false;
        }
    }
    return true;
}
void nQueens(int k, int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (place(k, i))
        {
            x[k] = i;
            if (k == n)
            {
                display(n);
            }
            else
            {
                nQueens(k + 1, n);
            }
        }
    }
}
int main()
{
    nQueens(1, 4);
    return 0;
}