#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size of array\n";
cin>>n;
int arr[n];
cout<<"enter the array elements\n";
for(int i=0;i<n;i++){
int j,flag=0;
	cin>>j;
	for(int q=0;q<i;q++)
	if(j==arr[q])
	flag=1;
	if(flag!=1)
	arr[i]=j;
	else{
	i--;n--;}
}
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
return 0;	
}
