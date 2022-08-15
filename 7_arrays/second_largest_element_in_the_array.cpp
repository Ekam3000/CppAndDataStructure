#include<iostream>
using namespace std;
int main(){
int i, m1=-99999, m2=-99999, arr[10],n;
 cin>>n;
 cout<<"\n";
for(i=0;i<n;i++)
{
     cin>>arr[i];
     if(i==0)
     {
          m1 = arr[i];
     }
     else if(arr[i]>m1)
     {
          m2 = m1; 
          m1 = arr[i]; 
     }
     else if(arr[i]>m2 && arr[i]<m1)
     {
          m2=arr[i];
     }
 }
cout<<m2;
return 0;
}