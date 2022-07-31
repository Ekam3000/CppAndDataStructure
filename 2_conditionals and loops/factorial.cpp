#include<iostream>
using namespace std;
int main(){
    int fact=1, i=1,n;
    cin>>n;
    for(;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
}