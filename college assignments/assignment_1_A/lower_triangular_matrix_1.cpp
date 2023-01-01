#include<iostream>
using namespace std;
int main(){
 int n=3;
 int size=(n*(n+1))/2;
 int arr[size];
 for(int i=0;i<size;i++){
 cin>>arr[i];
 }
 int k=0;
 for(int i=0;i<n;i++){
 for(int j=0;j<n;j++){
 if(i>=j)
 cout<<arr[k++]<<" ";
 else
 cout<<"0"<<" ";
 }
 cout<<endl;
 }
 return 0;
}