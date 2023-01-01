#include <iostream>
using namespace std;

int main()
{	cout<<"Enter the no. of rows and columns ";
	int m;
	int n;
	cin>>m>>n;
	cout<<"Enter the elements\n";
	int a[m][n];
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	cin>>a[i][j];

   int i, k = 0, l = 0;
 
cout<<"[";
    while (k < m && l < n) {
        for (i = l; i < n; ++i) {
            cout << a[k][i] << ",  ";
        }
        k++;
        for (i = k; i < m; ++i) {
            cout << a[i][n - 1] << ",  ";
        }
        n--;
 
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                cout << a[m - 1][i] <<",  ";
            }
            m--;
        }
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                cout << a[i][l] << ",  ";
            }
            l++;
        }
    }
    cout<<"]";
    return 0;
}

