#include<iostream>
using namespace std;
int row,col;
int main()
{
    int val,row,col;
    //insert rows and columns for matrix
    cin>>row;
    cin>>col;
    int a[row][col];
	//insert values in the matrix 
	cout<<"\n a: \n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>val;
			a[i][j]=val;
		}
	}
   
   //puting content of rows of a in columns of b
    int b[col][row];
    for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		   	b[j][i]=a[i][j];
	}
   
   //copy contents of b in a
    for(int j=0;j<col;j++)
	{
		for(int i=0;i<row;i++)
			a[j][i]=b[j][i];
	}
	
	//display a
	for(int i=0;i<col;i++)
	{
		for(int j=0;j<row;j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
	
	return 0;
}