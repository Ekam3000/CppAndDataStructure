#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
  //  for some time wew ill always initiate array will a const value
    int array[100];
    for(int i=0; i<n;i++){
        cin>>array[i];
    }
    for(int i=0; i<n;i++){
        cout<<array[i]<<endl;
    }
    cout<<endl;
    for(int i=0; i<100;i++){
        cout<<array[i]<<endl;
    }
}