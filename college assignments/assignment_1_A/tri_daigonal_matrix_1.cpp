#include<iostream>
using namespace std;
int main(){
 int n=4;
 int size=3*n-2;
 int arr[size];
 for(int i=0;i<size;i++){
 arr[i]=i+1;
 }
 int k=0;
 for(int i=0;i<n;i++){
 for(int j=0;j<n;j++){
 if(i-j==1||i-j==0||i-j==-1){
 cout<<arr[k++]<<" ";
 }
 else
 cout<<"0"<<" ";
 }
 cout<<endl;
 }
 return 0;
}