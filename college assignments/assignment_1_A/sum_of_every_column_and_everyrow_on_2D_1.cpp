#include<iostream>
using namespace std;
int main(){
 int n,m,sum=0;
 cout<<"Enter the number of rows and columns"<<endl;
 cin>>n>>m;
 int arr[n][m];
 for(int i=0;i<n;i++){
 for(int j=0;j<m;j++){
 cin>>arr[i][j];
 }
 }
 cout<<"The sum of rows is "<<endl;
 for(int i=0;i<n;i++){
 sum=0;
 for(int j=0;j<m;j++){
 sum+=arr[i][j];
 }
 cout<<"Sum of "<<i<<" row is "<<sum<<endl;
 }
 sum=0;
 cout<<"The sum of columns is "<<endl;
 for(int j=0;j<m;j++){
 sum=0;
 for(int i=0;i<n;i++){
    sum+=arr[i][j];
 }
 cout<<"Sum of "<<j<<" column is "<<sum<<endl;
 }
 return 0;
} 