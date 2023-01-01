#include<iostream>
using namespace std;
int main(){
 int n=4;
 int k=1;
 int arr[n][n];
 int row_start=0,row_end=n-1,column_start=0,column_end=n-1;
 while(row_start<=row_end && column_start<=column_end){
 for(int col=column_start;col<=column_end;col++){
 arr[row_start][col]=k;
 k++;
 }
 row_start++;
 for(int row=row_start;row<=row_end;row++)
 arr[row][column_end]=k;
 k++;
 }
 column_end--;
 if(row_start<=row_end){
 for(int col=column_end;col>=column_start;col--){
 arr[row_end][col]=k;
 k++;
 }
 
 }
 row_end--;
 if(column_start<=column_end){
 for(int row=row_end;row>=row_start;row--){
 arr[row][column_start]=k;
 k++;
 }
 
 }
 column_start++;
 }
 for(int i=0;i<n;i++){
 for(int j=0;j<n;j++){
 cout<<arr[i][j]<<" ";
 }
 cout<<endl;
 }
 return 0;
 }