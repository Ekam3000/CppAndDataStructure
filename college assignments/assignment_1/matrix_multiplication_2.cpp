#include <iostream>

using namespace std;
int main(){
	int m,n;
	cout<<"enter the no. of rows and columns:\n";
	cin>>m>>n;
	int ar1[m][n],ar2[m][n],r[m][n];
	cout<<"enter the first matrix\n";
	for(int i=0;i<m;i++)
	 for(int j=0;j<n;j++)
		cin>>ar1[i][j];
	
	cout<<"enter the second matrix\n";	
	for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
		cin>>ar2[i][j];
		
	for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            r[i][j] = 0;
            for (int k = 0; k < n; k++)
                r[i][j] += ar1[i][k] * ar2[k][j];
        }
    }	
    cout<<"The matrix after multiplication is\n";
    for(int i=0;i<m;i++){
     for(int j=0;j<n;j++)
		cout<<r[i][j]<<" ";
		cout<<endl;
	}
			
	
}
