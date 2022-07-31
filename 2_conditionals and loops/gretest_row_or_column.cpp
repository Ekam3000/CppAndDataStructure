#include <iostream>
using namespace std;
int main()
{
    int array[6][6];
    int m, n;
    int num;
    cout << "number of test cases";
    cin >> num;
    cout << endl;
    int i = 1;
    int p, q;
    while (i <= num)
    {
        cout << "enter number of rows and columns:";
        cin >> m >> n;
        int array1[10];
        int array2[10];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> array[i][j];
            }
            cout << endl;
        }
        for (int i = 0; i < m; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += array[i][j];
            }
            array1[i] = sum;
        }
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for (int i = 0; i < m; i++)
            {
                sum += array[i][j];
            }
            array2[j] = sum;
        }
        int max1 = -99999;
        for (int i = 0; i < m; i++)
        {
            if (array1[i] > max1)
            {
                max1 = array1[i];
                p = i;
            }
        }
        int max2 = -99999;
        for (int j = 0; j < n; j++)
        {
            if (array2[j] > max2)
            {
                max2 = array2[j];
                q = j;
            }
        }
        if (max1 >= max2)
        {
            cout << "row"
                 << " " << p << " " << max1;
        }
        else
            cout << "column"
                 << " " << q << " " << max2;
        num++;
        cout << endl;
    }
}