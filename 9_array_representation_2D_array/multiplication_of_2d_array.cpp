#include<iostream>
using namespace std;
int main()
{
	int r,c,x[r][c];
	cout<<"Enter rows "<<endl;
	cin>>r;
	cout<<"Enter  columns"<<endl;
	cin>>c;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
      {
		cin>>x[i][j];
	  }
    }
	 int m,n,y[m][n];
	cout<<"Enter  rows "<<endl;;
	cin>>m;
	cout<<"Enter  columns "<<endl;
	cin>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>y[i][j];
		}
	}
	    int z[r][n],sum=0;
	    for(int i=0;i<r;i++)
	    { 
            for(int k=0;k<n;k++){
	    	for(int j=0;j<c;j++)
	    	{
                sum += x[i][j]*y[j][k];
            }
            z[i][k]=sum;
            cout<<z[i][k]<<"\t";
            sum=0;
            }
            cout<<endl;
        }      
}