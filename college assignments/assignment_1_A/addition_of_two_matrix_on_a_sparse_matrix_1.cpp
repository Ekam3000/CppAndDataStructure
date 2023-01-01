#include<iostream>
using namespace std;
int main()
{
 int n,a,b,i,j,r=1,c=0,k;
 cout<<"Enter number of non zero elements in first matrix: ";
 cin>>a;
 cout<<"Enter number of non zero elements in second matrix: ";
 cin>>b;
 cout<<"Enter number of rows or columns: "; // addition operation can only be performed in square matrix.
 cin>>n;
 int firstt[a+1][3],secondt[b+1][3],firstm[n][n],secondm[n][n];
 firstt[0][0]=n;
 firstt[0][1]=n;
 firstt[0][2]=a;
 secondt[0][0]=n;
 secondt[0][1]=n;
 secondt[0][2]=b;
 cout<<"Enter triplet for first matrix:"<<endl;
 for(i=1;i<a+1;i++)
 {
 for(j=0;j<3;j++)
 {
 cin>>firstt[i][j];
 }
 }
 cout<<"Enter triplet for second matrix:"<<endl;
 for(i=1;i<b+1;i++)
 {
 for(j=0;j<3;j++)
 {
 cin>>secondt[i][j];
 }
 }
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
 if(i==firstt[r][c] && j==firstt[r][c+1])
 {
 firstm[i][j]=firstt[r][c+2];
 r++;
 }
 else
{
 firstm[i][j]=0;
 }
 }
 }
 r=1,c=0;
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
 if(i==secondt[r][c] && j==secondt[r][c+1])
 {
 secondm[i][j]=secondt[r][c+2];
 r++;
 }
 else
 {
 secondm[i][j]=0;
 }
 }
 }
 cout<<"First matrix is:"<<endl;
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
 cout<<firstm[i][j];
 cout<<" ";
 }
 cout<<endl;
 }
 cout<<"Second matrix is:"<<endl;
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
 cout<<secondm[i][j];
 cout<<" ";
 }
 cout<<endl;
 }
 int counter=0;
 r=0;
 c=1;
 int add[20][3];
 add[0][0]=n;
 add[0][1]=n;
 i=j=k=1;
 while(i<=a && j<=b)
 {
 if(firstt[i][0]<secondt[j][0])
 {
 add[k][0]=firstt[i][0];
 add[k][1]=firstt[i][1];
 add[k][2]=firstt[i][2];
 i++;
 k++;
 counter++;
 }
 else if(secondt[j][0]<firstt[i][0])
 {
 add[k][0]=secondt[j][0];
 add[k][1]=secondt[j][1];
 add[k][2]=secondt[j][2];
 j++;
 k++;
 counter++;
 }
 else if(firstt[i][1]<secondt[j][1])
 {
 add[k][0]=firstt[i][0];
 add[k][1]=firstt[i][1];
 add[k][2]=firstt[i][2];
 i++;
 k++;
 counter++;
 }
 else if(firstt[i][1]>secondt[j][1])
 {
 add[k][0]=secondt[j][0];
 add[k][1]=secondt[j][1];
 add[k][2]=secondt[j][2];
 j++;
 k++;
 counter++;
 }
 else
 {
 add[k][0]=firstt[i][0];
 add[k][1]=firstt[i][1];
 add[k][2]=firstt[i][2]+secondt[j][2];
 i++;
 j++;
 k++;
 counter++;
 }
 }
while(i<=a)
{
 add[k][0]=firstt[i][0];
 add[k][1]=firstt[i][1];
 add[k][2]=firstt[i][2];
 i++;
 k++;
 counter++;
}
while(j<=b)
{
 add[k][0]=secondt[j][0];
 add[k][1]=secondt[j][1];
 add[k][2]=secondt[j][2];
 j++;
 k++;
 counter++;
}
add[0][2]=counter;
 cout<<"Addition of two matrices in triplet form is: "<<endl;
 for(i=0;i<=counter;i++)
 {
 for(j=0;j<3;j++)
 {
 cout<<add[i][j];
 cout<<" ";
 }
 cout<<endl;
 }
 int addm[n][n];
 r=1;
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
 if(i==add[r][0] && j==add[r][1])
 {
 addm[i][j]=add[r][2];
 r++;
 }
 else
 {
 addm[i][j]=0;
 }
 }
 }
 cout<<"Addition of two matrices in matrix form is:"<<endl;
for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
 cout<<addm[i][j]<<" ";
 }
 cout<<endl;
 }
 return 0;
}