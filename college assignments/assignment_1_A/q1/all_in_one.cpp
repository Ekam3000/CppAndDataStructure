#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int n,m;
	cout<<"1. Enter the no. of rows of the Diagonal matrix ";
	cin>>n;
	cout<<"Enter the "<<n<<" diagonal elements\n";
	int a1[n];
	for(int i=0;i<n;i++)
	cin>>a1[i];
	
	  cout<<"The diagonal matrix is\n"; 
	 for(int i=0;i<n;i++){
	   for(int j=0;j<n;j++){
	   if(i==j)
	      cout<<a1[i]; 
		else 
		cout<<"0";  } 
	      
	  cout<<endl;}
	  	
	cout<<"2. Enter the no. of rows of the tri-diagonal matrix: ";
	cin>>n;
	int k=3*n-2;
	int a2[k];
	k=0;
	for(int i=0;i<n;i++)
	   for(int j=0;j<n;j++){
	   	   if(abs(i-j)<2){
	   	   cout<<"a["<<i<<"]["<<j<<"]= ";	
	   	   cin>>a2[k++];}
	   }  	
	   k=0;
	 cout<<"\nThe Tridiagonal matrix is\n"; 
	  for(int i=0;i<n;i++){
	   for(int j=0;j<n;j++){
	   if(abs(i-j)<2)
	      cout<<a2[k++]; 
	   else
	   cout<<"0";}   	      
	  cout<<endl;} 

cout<<"3. Enter the no. of rows of the upper trianglar matrix ";
	cin>>n;
	k=n*(n+1)/2;
	int a3[k];
	cout<<"enter the elements\n";
	for(int i=0;i<k;i++)
	cin>>a3[i];  	
	   k=0;
	 cout<<"\nThe upper trangular matrix is\n"; 
	  for(int i=0;i<n;i++){
	   for(int j=0;j<n;j++){
	   if(i<=j)
	      cout<<a3[k++]; 
	   else
	   cout<<"0";}   
	  	cout<<endl;}

cout<<"4. Enter the no. of rows of the lower trianglar matrix ";
	cin>>n;
	k=n*(n+1)/2;
	int a4[k];
	cout<<"enter the elements\n";
	for(int i=0;i<k;i++)
	cin>>a4[i];  	
	   k=0;
	 cout<<"\nThe upper trangular matrix is\n"; 
	  for(int i=0;i<n;i++){
	   for(int j=0;j<n;j++){
	   if(i>=j)
	      cout<<a4[k++]; 
	   else
	   cout<<"0";}   
	  	cout<<endl;} 
		      
cout<<"5. Enter the no. of rows of the symmetric matrix ";
	cin>>n;
	cout<<"enter the upper triangular elements of the symmetric matrix\n";
	k=(( n*(n+1) ))/2;
	int a5[k];
	for(int i=0;i<k;i++)
	cin>>a5[i];	
	  int x=0,y=1,z=0; 
	  for(int i=0;i<n;i++){
	   for(int j=0;j<n;j++){
	   	     if(i<=j)
	   	      cout<<a5[x++];
	   	      
	   	      else
				{
				z=-1;
				for(y=i;i>j;y=y+n-1-z){
				if(i>j)	{
				cout<<a5[y];
				j++;
				z++;}
				 }
				 j--;
	   	    
	   			}
				//   j=i;  
		}	
	    cout<<endl;
		}
}
