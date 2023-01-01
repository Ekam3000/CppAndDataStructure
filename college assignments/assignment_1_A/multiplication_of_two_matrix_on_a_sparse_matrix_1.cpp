#include<iostream>
using namespace std;
void display( int a[][3], int m){
 int r=1;
 for(int i=0; i<a[0][0];i++){
 cout<<"\t";
 for(int j=0;j<a[0][1];j++){
 if(i==a[r][0] && j==a[r][1])
 cout<<a[r++][2]<<" ";
 else
 cout<<"0 ";}
 cout<<endl; 
 }
}
void displaytranspose( int a[][3], int m){
 int r=1,flag=0;
 cout<<"The transposed array is\n"; 
 for(int i=0; i<a[0][1];i++){ 
 cout<<"\t";
 for(int j=0;j<a[0][0];j++){
 for(int r=1;r<=m;r++){ 
 if(i==a[r][1] && j==a[r][0]){
 cout<<a[r++][2]<<" ";flag=1;}
 }
 if(flag==0)
 cout<<"0 ";
 flag=0;
 }
 cout<<endl; 
 }
}
void displayadded(int a[][3], int b[][3],int m,int n){
 int r=1;
 int s=1;
 cout<<"The array added with other array is\n";
 int g=0;
 int maxcolms=a[0][1]>b[0][1]?a[0][1]:b[0][1]; //5
 int maxrows=a[0][0]>b[0][0]?a[0][0]:b[0][0]; //4
 
 for(int i=0 ; i<maxrows ;i++,g++){
 cout<<"\t";
 int sum[maxrows];
 int sumcount=0;
 for(int j=0; j<maxcolms; j++){ 
 if( j<maxcolms && i==a[r][0] && j==a[r][1]){//
 cout<<a[r][2]<<" ";
 sum[sumcount++]=a[r++][2];}
 else {
 cout<<"0 ";sum[sumcount++]=0;}
 }
 
 
 sumcount=0;
 
 if(i!=maxcolms/2){ //to add a plus sign in the middle
 cout<<" ";}
 else
 cout<<" + ";
 
 for(int j=0; j<maxcolms; j++){
 if( i==b[s][0] && j==b[s][1]){
 cout<<b[s][2]<<" ";sum[sumcount++]+=b[s++][2];
 }
 else {
 cout<<"0 ";sum[sumcount++]+=0;}
 
 }
 
 if(i!=maxcolms/2){ //to add a = sign in the middle
 cout<<" ";}
 else
 cout<<" = ";
 
 for(int j=0; j<maxcolms; j++)
 cout<<sum[j]<<" ";
 
 cout<<endl; 
 }
}
void displaymulti(int a[][3], int b[][3],int m,int n){
 cout<<"Multiplication of the 2 maitix\n";
 display(a,m);
 cout<<"and \n";
 display(b,n);
 cout<<"is\n";
 int sumcount=0;
 int x=0,y=0;
 int an;
 int R1=a[0][0],C1=a[0][1],R2=b[0][0],C2=b[0][1];
 int rslt[R1][C2];
 for (int i = 0; i < R1; i++) {
 cout<<"\t";
 for (int j = 0; j < C2; j++) {
 rslt[i][j] = 0;
 for (int k =0; k < R2; k++) {
 
 for(int r=1;r<=m;r++) 
 if( i==a[r][0] && k==a[r][1]){
 x=a[r][2];
 break;}
 for(int s=1;s<=m;s++) 
 if( k==b[s][0] && j==b[s][1]){
 y=b[s][2];;
 break;}
 //[i][k] * mat2[k][j] 
 
 rslt[i][j] += x * y;
 x=0;y=0;
 }
 cout << rslt[i][j] << " ";
 }
 cout << endl;
 }
}
int main(){
 int m=4; //no. of non zero elements
 int a[m+1][3]={ {3,4,m}, {0,0,1}, {1,2,9}, {2,1,2}, {2,3,1} };
 /* 1 0 0 0 | |
 0 0 9 0 | colms
 0 2 0 1 num of rows
 */
 cout<<"The array is\n";
 display(a,m);
 displaytranspose(a,m);
 
 
 int n=5; //no. of non zero elements
 int b[n+1][3]={ {4,5,n}, {0,1,2}, {0,4,6}, {1,2,2}, {2,1,9},{3,1,4} };
 /* 0 2 0 0 6 | |
 0 0 2 0 0 | colms
 0 9 0 0 0 num of rows
 0 4 0 0 0 
 */
 displayadded(a,b,m,n);
 
 n=4;
 int c[n+1][3] = { {4,3,n-1}, {0,1,2}, {1,2,2},{2,1,9},{3,1,4} };
 /* 0 2 0 | |
 0 0 2 | colms
 0 9 0 num of rows
 0 4 0 
 */
 displaymulti(a,c,m,n);
 return 0;
}
