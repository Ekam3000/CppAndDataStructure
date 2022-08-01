#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,flag=1,i=2;
    cin>>n;
    for(;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"given  number is not an prime number";
            flag=2;
            break;
        }
    }
    if(flag==1){
           cout<<"given  number is an prime number";
    }
    return 0;
}