#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[20];
    for(int i=0;i<n;i++){
    cin>>array[i];
    }
    int max=array[0];
    int min=array[1];
    for(int i=1;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
        if(array[i+1]<min){
            min=array[i+1];
        }
    }
    if(array[0]<min){
        min=array[0];
    }
    cout<<"minimum and maximum element are:"<<min<<"\t"<<max;

}