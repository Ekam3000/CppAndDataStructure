#include<iostream>
using namespace std;
int main(){
 int n=3;
 int size=(n*(n+1))/2;
 int arr[size];
 for(int i=0;i<size;i++){
 cin>>arr[i];
 }
 for(int i=1;i<=n;i++){
 for(int j=1;j<=n;j++){
 if(i>=j){
 cout<<arr[(((i*i)-i)/2)+j-1]<<" ";
 }
 else{
 cout<<arr[(((j*j)-j)/2)+i-1]<<" ";
 }
 }
 cout<<endl;
 }
 return 0;
}