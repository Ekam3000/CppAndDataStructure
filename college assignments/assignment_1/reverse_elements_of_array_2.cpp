#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the no.s of elements of array\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array\n";
	for(int i=n-1;i>=0;i--)
	cin>>arr[i];
	
	cout<<"The array is: ";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";

}
