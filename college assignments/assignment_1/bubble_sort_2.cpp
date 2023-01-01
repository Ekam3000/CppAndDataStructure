#include<iostream>
using namespace std;

int* bubble(int arr[],int n=7){
for(int i=0;i<n-1;i++){
	if(arr[i]>arr[i+1]){
	 int z=arr[i+1];
	 arr[i+1]=arr[i];
	 arr[i]=z;
	 i-=2;
	}

}
	return arr;
}
int main(){
	int arr[7]={64,34,35,12,22,11,90};
	*arr=*bubble(arr,7);
	
	for(int i=0;i<7;i++)
	     cout<<arr[i]<<" ";

}
