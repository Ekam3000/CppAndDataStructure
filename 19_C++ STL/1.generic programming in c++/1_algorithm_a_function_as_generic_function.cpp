#include<iostream>
using namespace std;
template <typename T>
 T search(T A[], int n, T a)
 {
     for(int i=0;i<n;i++)
     {
         if(A[i]==a)
         {
             return i;
         }
     }
     return -1;
 }
 int main()
 {
     int A[] ={1,2,3,4,5,6};
     //float A[]={1.2,1.3,1.4,1.5};
     int n=sizeof(A)/sizeof(int);
     int k=5;
     //float k= 1.4;
     cout<<search(A,n,k)<<endl;
 }