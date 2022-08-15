#include<iostream>
using namespace std;
void printArray(int input[], int n){
    int i=0;
    for(i;i<n;i++){
        cout<<input[i]<<" ";
        cout<<endl;
    }
}
void reverseArray(int input[], int n){
    int i=0; 
    int j=n-1;
    while(i<j){
    int temp= input[i];
    input[i]=input[j];
    input[j]=temp;
    i++;
    j--;
    }
}
int main(){
   int array[10]={1,2,3,4,5};
    reverseArray(array,5);
    printArray(array,5);
}

