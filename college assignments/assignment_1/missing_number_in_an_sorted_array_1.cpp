#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
 cin>>arr[i];
 }
 for(int i=0;i<n-1;i++){
 if(arr[i]!=arr[i+1]-1){
 cout<<arr[i+1]-1;
 break;
 }
 else{
 continue;
 }
 }
 return 0;
}