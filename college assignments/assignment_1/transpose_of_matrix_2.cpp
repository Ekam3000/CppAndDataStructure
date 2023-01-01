#include<iostream>
using namespace std;
int main(){
int m,n;
cout<<"enter the no. of rows and columns:\n";
cin>>m>>n;
int arr[m][n];
cout<<"Enter the elements\n";
for(int j=0;j<n;j++)
 for(int i=0;i<m;i++)
	cin>>arr[i][j];

cout<<"The matrix after transpose is\n";
for(int i=0;i<m;i++){
 for(int j=0;j<n;j++)
	cout<<arr[i][j]<<" ";
	cout<<endl;}	
}
