#include<iostream>
using namespace std;
int main()
{
 int n,i,a,j,r=1,c=0;
 cout<<"Enter number of non zero elements: ";
 cin>>n;
 cout<<"Enter number of rows or columns: ";
 cin>>a;
 int triplet[n+1][3];
 triplet[0][0]=a;
 triplet[0][1]=a;
 triplet[0][2]=n;
 for(i=1;i<n+1;i++)
 {
 for(j=0;j<3;j++)
 {
 cin>>triplet[i][j];
 }
 }
 int matrix[a][a];
 for(i=0;i<a;i++)
 {
 for(j=0;j<a;j++)
 {
 if(i==triplet[r][c] && j==triplet[r][c+1])
 {
 matrix[i][j]=triplet[r][c+2];
 r++;
 }
 else
 {
 matrix[i][j]=0;
 }
 }
 }
 cout<<"Original matrix is: "<<endl;
 for(i=0;i<a;i++)
 {
 for(j=0;j<a;j++)
 {
 cout<<matrix[i][j];
 cout<<" ";
 }
 cout<<endl;
 }
 // triplet in column major
 int swap;
 for(i=1;i<n+1;i++)
 {
 swap=triplet[i][0];
 triplet[i][0]=triplet[i][1];
 triplet[i][1]=swap;
 
 }
 // triplet in row major
 for(i=1;i<n+1;i++)
 {
 for(j=i+1;j<n+1;j++)
 {
 if(triplet[i][0]>triplet[j][0])
 {
 
 swap=triplet[i][0];
 triplet[i][0]=triplet[j][0];
 triplet[j][0]=swap;
 swap=triplet[i][1];
 triplet[i][1]=triplet[j][1];
 triplet[j][1]=swap;
 swap=triplet[i][2];
 triplet[i][2]=triplet[j][2];
 triplet[j][2]=swap;
 }
 }
 }
 for(i=1;i<n+1;i++)
 {
 for(j=i+1;j<n+1;j++)
 {
 if(triplet[i][1]>triplet[j][1] && triplet[i][0]==triplet[j][0])
 {
 swap=triplet[i][1];
 triplet[i][1]=triplet[j][1];
 triplet[j][1]=swap;
 swap=triplet[i][2];
 triplet[i][2]=triplet[j][2];
 triplet[j][2]=swap;
 }
 }
 }
 // Transposed matrix
 cout<<"Transposed matrix is:"<<endl;
 r=1;
 c=0;
 int transposed[a][a];
 for(i=0;i<a;i++)
 {
 for(j=0;j<a;j++)
 {
 if(i==triplet[r][c] && j==triplet[r][c+1])
 {
 transposed[i][j]=triplet[r][c+2];
 r++;
 }
 else
 {
 transposed[i][j]=0;
 }
 }
 }
 for(i=0;i<a;i++)
 {
 for(j=0;j<a;j++)
 {
 cout<<transposed[i][j];
 cout<<" ";
 }
 cout<<endl;
 }
 
 return 0;
}