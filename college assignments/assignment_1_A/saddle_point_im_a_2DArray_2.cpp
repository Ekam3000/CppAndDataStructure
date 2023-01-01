#include<iostream>
using namespace std;
int main(){
	cout<<"Enter the no. of rows and columns ";
	int n;
	int m;
	cin>>n>>m;
	cout<<"Enter the elements\n";
	int a[n][m];
	int row[n];
	int col[m];
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++){
	cin>>a[i][j];
	row[i]=INT_MAX;
	col[j]=0;
	}
	
	int k=0,q=0;
	
	for(int i=0; i<n; i++,k++,q++)
	  for(int j=0; j<m; j++){
	  	if(a[i][j]<row[k])
	  	row[k]=a[i][j];
	  	if(a[j][i]>col[q])
	  	col[q]=a[j][i];
	  	
	  }
	  
	    
int z=0,flag=0;
		for(int i=0;i<n;i++)
		   for(int j=0;j<n;j++){
		   	if(row[i]==col[j]){
		   		z=row[i];flag=1;
			   }
		   	
		   }
	flag==1?cout<<"The saddle element is "<<z:cout<<"No saddle element found";	      
	return 0;
}
