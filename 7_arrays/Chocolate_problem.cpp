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

int Minimum_possible_difference(int *array, int n, int m){
    bubbleSort(array,n);
    int min;
    if(array[m-1]==array[m]){
        for(int i=0;i<m;i++){
            array[i]=array[i+1];
        }
        min= array[m-1] -array[0];
        return min;
    }
    else
    min = array[m-1]-array[0];
    return min;
}

int main(){
    int array[15];
    int n;
    cout<<"the size of the array:";
    cin>>n;
    int m;
    cout<<"the number of students:";
    cin>>m;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<Minimum_possible_difference(array,n,m);
}
/*
example 1---
the size of the array:8
the number of students:3
1 3 4 7 9 9 9 56
3
example 2--
the size of the array:8
the number of students:6
1 3 4 7 9 9 9 56
6
example 3--
the size of the array:7
the number of students:3
7 3 2 4 9 12 56
2
*/

