#include <iostream> 
using namespace std; 
int main() 
{ 
int arr[10][10],arr1[10][10],r,c,i,j; 
cin>>r; 
cin>>c; 
for(i=0;i<r;i++) 
{ 
for(j=0;j<c;j++) 
{ 
cin>>arr[i][j]; 
} 
} 
for(i=0;i<r;i++){
 for(j=0;j<c;j++){
 arr1[i][j]=arr[j][i];
 }
}
for(i=0;i<r;i++){
 for(j=0;j<c;j++){
 cout<<arr1[i][j]<<" ";
 }
 cout<<endl;
}
}