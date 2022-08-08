#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    // next  three lines me jo likha hai vo kabhi matt karna.
    int *p;
    cout<<p<<endl;
    cout<<*p<<endl;
    (*p)++;
    cout<<*p<<endl;
    //but ye tum kar sakte ho. erroe dega segmentation fault ka.
     int *q =0;
    cout<<q<<endl;// ye zero dega output
    cout<<*q<<endl;
    (*q)++;
    cout<<*q<<endl;
    // ye dekho ab same chij ,error hai isme bhi.
    int *ptr=0;
    int a=10;
    *ptr =a;
    cout<<*ptr<<endl;
    // void pointer 
    void *ptr1;
    char *s; 
    ptr1=s;
    //s=ptr;// error 
   // while you can assign a pointer of any type to a void pointer , the reverse is not true 
   s=(char*)ptr1;
   cout<<s<<endl;
}
/*
4201435
4201436
0x61ff54
6422404
6422405
0
*/