
#include<iostream>
using namespace std;
int main(){
int i, m1=0, m2=0, n, num;
cout<<"\n";
cin>>n;
for(i=0;i<n;i++)
{
     cin>>num;
     if(i==0)
     {
          m1 = num;
     }
     else if(num>m1)
     {
          m2 = m1; 
          m1 = num; 
     }
     else if(num>m2)
     {
          m2=num;
     }
 }
cout<<m2;
return 0;
}