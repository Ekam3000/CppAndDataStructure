#include <iostream>
using namespace std;

int*create(int arr[],int n){
	cout<<"enter the elements of the array"<<endl;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	return arr;	
}
int display(int arr[],int n){
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
int* insert(int arr[],int n){
	cout<<"Where do you want to insert the element from 0 to "<<n-1<<endl;
	int x;
	cin>>x;
	for(int i=n;i>x;i--)
	arr[i]=arr[i-1];

	cout<<"Enter the element to insert";
	int q;
	cin>>q;
	arr[x]=q;
	
		
	return arr;	
}

int* delte(int arr[],int n){
	cout<<"Which element do you want to delete from 0 to "<<n-1<<endl;
	int x;
	cin>>x;
	for(int i=x;i<n-1;i++)
	arr[i]=arr[i+1];
	return arr;	
}
int search(int arr[],int n){
	cout<<"enter the element to search ";
	int x;
	cin>>x;
	int flag=-1;
	for(int i=0;i<n;i++){
	if(x==arr[i]){
	flag=i;}
	}
	
}
int main(){
	int n;
	cout<<"Enter the no.s of elements of n: ";
	cin>>n;
	int arr[n+5];
	
int i=0;

do{cout<<"\n1. Create\n2. Display\n3.Insert\n4.Delete\n5.Search\n6.Exit ";
cin>>i;
	switch(i){
	case 1: int *x;
			x=create(arr,n);
			for(int j=0;j<n;j++)
			*(x+j)=*(arr+j);
			break;
	case 2: display(arr,n);
			break;	
	case 3: int *y;
			y=insert(arr,n);
			n++;
			for(int j=0;j<n;j++)
			*(y+j)=*(arr+j);
			break;
	case 4: int *z;
			z=delte(arr,n);
			for(int j=0;j<n;j++)
			*(z+j)=*(arr+j);
			n--;
			break;
	case 5: int zx=search(arr,n);
			if(zx==-1)
			cout<<"element not found";
			else
			cout<<"element found at posn."<<zx;
			break;}
}while(i!=6);
}
