#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for(int i=0; i<n-1;i++){
    int min=arr[i];
    int minIndex=i;
    for(int j=i+1;j<n;j++){
    //  if(arr[j]<min)  for decreasing order. 
    if(arr[j]<min){
            min=arr[j];
            minIndex=j;
        }
    }
        int temp;
        temp=arr[i];
        arr[i]=min; // or arr[minIndex]
        arr[minIndex]=temp;

    }
}
int main(){
   int  arr[10]={1,5,4,7,9,2,6};
    selectionSort(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<endl;
    }
}