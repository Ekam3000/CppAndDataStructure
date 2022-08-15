/*Code : Rotate matrix
Send Feedback
Given an N*N integer square matrix, rotate it by 90 degrees in anti-clockwise direction.
Try doing it without any extra space.
Note : You just need to change in the given input itself. No need to return or print anything.
Input format :
Line 1 : Integers N
Next N lines : N integers, elements of one row (separated by space)
Output Format :
Updated matrix
Constraints :
1 <= N <= 1000
Sample Input :
3
1 2 3
4 5 6
7 8 9
Sample Output :
3  6  9 
2  5  8 
1  4  7

*/

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
    int c[col][row];
   int k=col-1;
	for(int i=0;i<col;i++)
	{
		for(int j=0;j<row;j++){
		  c[k][j]=a[i][j];
        }
           k--;
		   cout<<"\n";
	}
    for(int i=0;i<col;i++)
	{
		for(int j=0;j<row;j++)
			cout<<c[i][j]<<" ";
		cout<<"\n";
	}
	return 0;
}