#include<iostream>
using namespace std;
int main(){
    int i=10;
    int *p=&i;
    cout<<p<<endl;
    p=p+1;
    // address of p me incrementation aaye
    // gaa 4 bytes ka.
    cout<<p<<endl;
    p--;
    cout<<p<<endl;
    int arr[5] ={1,2,3,4,5};
    int *q= &arr[0];
    cout<<q<<endl;
    q++;
     cout<<q<<endl;  // this will point to arr[1]
     cout<<*q<<endl; 
     int *r=&arr[4];
    cout<<r<<endl;
    if(r>q){
        cout<<r<<endl;
    }

// so incrementation of pointers and comparison 
// b/t two pointera only makes sense in caase of 
// arrays , as in arrays the elements are consequtively
// placed.
}

