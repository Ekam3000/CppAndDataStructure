#include<iostream>
using namespace std;
int main(){
    int n;
cout<<"    enter size of array";
    cin>>n;
    int array[10];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    for(int i=n-1;i>=0;i--){
        cout<<array[i];
    }
    
}