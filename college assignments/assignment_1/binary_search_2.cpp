#include<iostream>
using namespace std;
int func(int arr[],int n,int x,int low,int high){
	int mid=low+(high-low)/2;
	
	if(x==arr[mid])
	  return mid;
      
	else if(x<arr[mid])
	   func(arr,n,x,low,mid-1);
	   
	else if(x>arr[mid])
	   func(arr,n,x,mid+1,high);

	else if(low==high)
	   return -2;
}
int main(){
	int n;
	cout<<"Enter the no. of elements " ;
	  cin>>n;
	int arr[n];

	cout<<"Enter the elements\n";
	for(int i=0;i<n;i++)
	  cin>>arr[i];

	cout<<"Enter the element to find "; 
	int x;
	 cin>>x;

	cout<<"\nThe element was found at posn. "<<func(arr,n,x,0,n-1)+1;
	
}
