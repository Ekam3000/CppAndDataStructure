#include<iostream>
using namespace std;
 int main(){
     int array1[10];
     int array2[10];
     int m,n;
     cout<<"enter the size of two given arrays"<<endl;
     cin>>m>>n;
     for(int i=0;i<m;i++){
         cin>>array1[i];
     }
     cout<<endl;
     for(int i=0;i<n;i++){
         cin>>array2[i];
     }
     int array[20];
     int x=0;
     int flag;
      for(int i=0;i<m;i++){
          flag=1;
        for(int k=0;k<x;k++){
            if(array1[i] == array[k]){
            flag=2;
            break;
            }
        }
        if(flag==1)
        array[x++]=array1[i];
     }
      for(int i=0;i<n;i++){
          flag=1;
        for(int k=0;k<x;k++){
            if(array[k]==array2[i]){
            flag=2;
             break;
            }
        }
        if(flag==1)
        array[x++]=array2[i];
    
     }
     for(int i=0; i<x;i++){
         cout<<array[i];
     }
 }

 /*
 #include<iostream>
using namespace std;
int main()
{
	int i,j,size1,size2;
	cout<<"Enter the size of the ist array";
	cin>>size1;
	int a[size1];
	cout<<"Enter the elements of the ist array";
	for(i=0;i<size1;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the size of the second array";
	cin>>size2;
	int b[size2];
	cout<<"Enter the elements of the second array";
	for(i=0;i<size2;i++)
	{
		cin>>b[i];
	}
	 int total=size1+size2;
	 int c[total];
	  j=0;  // innitialise j with 0
	 for(i=0;i<total;i++)
	 {
 	    if(i<size1)
 	    {
 	    	c[i]=a[i];
		}
	    if(i>=size1&&i<total)
	    	 {
	
	    	 	c[i]=b[j++]; // here i have used the value of j and increment it further 
			 }
		}
	 for(i=0;i<total;i++)
	 {
	 	cout<<c[i]<<endl;
	 }

     // now u have to just do here one step to remove the duplicate elements from the given array c[];
	 return 0;
}
*/
