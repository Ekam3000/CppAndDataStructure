#include<iostream>
using namespace std;

int main(){ 
	int n=0,v=-1,Flag=0;
	cout<<"Enter the no. of elements ";
	cin>>n;
	int arr[n];
	int miss[n];
	int q=0;
	cout<<"Enter the elements of the array\n";
	for(int i=0;i<n;i++){
	  cin>>arr[i];
	  if(arr[i]-1!=arr[i-1] && arr[i]!=arr[i-1] && i!=0 ){
	    miss[q++]=arr[i]-1;
	    Flag=1;
	  }
	}

	if(Flag==1){
      cout<<"\nThe missing elements are ";
      for(int i=0;i<q;i++)
	    cout<<miss[i]<<" ";
	}
	else
	cout<<"No missing element";

}

