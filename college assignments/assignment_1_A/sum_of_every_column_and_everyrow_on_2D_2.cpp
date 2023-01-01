#include<iostream>
using namespace std;
int main(){
	int n=3;
	int m=3;
	int a[n][m]={{1,2,3},{4,5,6},{7,8,9}};
	int row[n]={0,0,0};
	int col[m]={0,0,0};
	int k=0,q=0;
	for(int i=0; i<n; i++,k++,q++)
	  for(int j=0; j<m; j++){
	  	row[k]+=a[i][j];
	  	col[q]+=a[j][i];
	  }
	  

	 	 (int j=0;j<n;j++){
	 		cout<<"\nrow"<<j+1;
	 	    cout<<"= "<<row[j];}
	 	    

	 	for(int j=0;j<n;j++){
	 		cout<<"\ncol "<<j+1;
	 	    cout<<"= "<<col[j];}	    
	 	    
		   
	return 0;
}
