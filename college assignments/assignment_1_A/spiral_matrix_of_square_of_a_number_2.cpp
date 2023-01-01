#include <iostream>
using namespace std;
int main()
{
	int size=4;
	cout<<"Enter the size of the matrix: ";
	cin>>size;
    int a[size][size];
    int m=size,n=size;

    int i, k = 0, l = 0,x=1;
 
 
    while (k < m && l < n) {
        for (i = l; i < n; ++i) {
            a[k][i]=x++;
        }
        k++;
        for (i = k; i < m; ++i) {
            a[i][n - 1]=x++;     
        }
        n--;
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                a[m - 1][i]=x++;  
            }
            m--;
        }
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                a[i][l]=x++;   
            }
            l++;
        }
    }
    cout<<"[";
    for(int i=0;i<size;i++){
    	cout<<"\t[";
    	for(int j=0;j<size;j++){
    	cout<<a[i][j];
		if(j!=size-1)
		cout<<",\t";
		}
    	cout<<"]";
    	if(i!=size-1)
		cout<<",\n";
	}
    cout<<"\t]";
    return 0;
}
