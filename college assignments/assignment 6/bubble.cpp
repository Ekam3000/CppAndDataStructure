#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
for(int j=0;j<n-1;j++){
    for(int i=0;i<n-1-j;i++){
        if(arr[i+1]<arr[i]){
            int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
        }
    }
}
}
int main(){
   int  arr[10]={10,5,4,7,9,2,100};
    bubbleSort(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<endl;
    }
}