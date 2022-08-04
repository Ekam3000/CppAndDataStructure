#include<iostream>
using namespace std;
int main()
{   
    int n;
cout<<"enter the number of rows:"<<endl;
cin>>n;
int array[n][n];
int j=1;
for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
        array[k][i]=j++;
    }
}
j=1;
int l=0;
int m=n-1;
int array1[n][n];
for(int k=0;k<n;k++){
     if(j%2!=0){
    for(int i=0;i<n;i++){
               array1[l][i]=array[k][i];
         }
         l++;
     }
         if(j%2==0){
    for(int i=0;i<n;i++){
               array1[m][i]=array[k][i];
         }
         m--;
    }
    j++;
}
for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
        cout<<array1[k][i]<<" ";
    }
    cout<<endl;
}
}