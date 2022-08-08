#include<iostream>
using namespace std;
/*int sum(int a[], int size){
}*/
 //OR
 //ek array pointer ki tarah hi treat hota hai jab vo function ko pass hota hai... tabhi to uska size 4 bytes(8 bytes in some other pc) aata hai.
 // iska mtl ye hua ki hum ek pointer ko bhi array ki tarah terat kar saktte hai (vice versa)
int sum(int *a,int size){
 cout<<sizeof(a)<<endl;
 int ans=0;
 for(int i=0;i<size;i++)
 {
    ans+=a[i];
 }
 return ans;
}
int main(){
int a[10];
a[5]=4;
int *p=&a[0];
cout<<sizeof(a)<<endl;
//in sum(a,10) the inside bracket a is usually telling that pointer int *a is pointing to a[0] element or address of a[0]
cout<<sum(a,10)<<endl;
//important 
//here pointer is pointing to a[3] element or address of a[3]
cout<<sum(a+3, 7)<<endl;
// pointer as array
// p[5] = *(p+5);
cout<<p[5]<<endl;
p[2]=2;
cout<<p[2]<<endl;
}