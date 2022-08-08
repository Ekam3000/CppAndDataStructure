#include<iostream>
using namespace std;
void increment(int **p){
    p=p+1;// double pointer ke block ki value change karna jo ki nii ho paye gi.
}
void increment2(int **p){
    *p=*p+1; // double pointer jis pointer ko point kar raha hai uske address ko ko increment karna 
}
void increment3(int **p){
    **p=**p+1;
}
int main(){
    int i=10;
    int *p=&i;
    int **p2=&p;
    cout<<p2<<endl;//address of p
    cout<<&p<<endl;//address of p
    cout<<*p2<<endl;// address of i
    cout<<p<<endl; // address of i
    cout<<&i<<endl;//address of i
    cout<<**p2<<endl;// value of i
    cout<<*p<<endl;//value of i
    cout<<i<<endl;//value of i
    increment(p2);
    cout<<"p2  "<<p2<<endl;//address of p
    increment2(p2);
    cout<<"*p2  "<<*p2<<endl;// incrementation in address of i
    cout<<"p  "<<p<<endl; //incrementation in address of i
    increment3(p2);
    cout<<"**p2  "<<**p2<<endl;
    cout<<i<<endl;
}