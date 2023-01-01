#include<iostream>
using namespace std;
void sorting012(int arr[],int array[],int n){
int i=0;
int count=0;
int count1=n-1;
for(i;i<n;i++){
if(arr[i]==0){
    array[count++]=0;
}
if(arr[i]==2){
    array[count1--]=2;
}
}
for(int i=count;i<=count1;i++){
    array[i]=1;
}
}
    void print(int array[], int n)
{
     cout << "Array after segregation is ";
 
     for (int i = 0; i < n; i++)
        cout << array[i] << " ";
}
 int main(){
     int n;
     cout<<"enter size:";
     cin>>n;
     cout<<endl;
     int arr[10];
     cout<<"array:";
     for(int i=0;i<n;i++){
         cin>>arr[i];
         cout<<"\t";
     }
     int array[10];
     sorting012(arr,array,n);
     print(array,n);
 }
