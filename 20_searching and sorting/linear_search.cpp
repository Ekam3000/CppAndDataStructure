#include<iostream>
using namespace std;
int main(){
int i=0,n,n1;
int array[20];
cout<<"enter an element whole value we have to search in the given array.";
cin>>n1;
for(;i<n;i++){
    cin>>array[i];
    if(n1==array[i]){
        cout<<"the index for which n1== array[i] is:"<<i;
        break;
    }
}
if(i==n){
    int i1=-1;
    cout<<i1;
}
}