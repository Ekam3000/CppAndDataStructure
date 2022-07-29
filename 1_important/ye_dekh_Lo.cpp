#include<iostream>
using namespace std;
int main(){
int a[5]={1,2,3,4,5};
char b[]="abc";
cout<<"1. "<<a<<endl;
cout<<"b: "<<b<<endl;
//important
cout<<"2. "<<b+1<<endl;
//char *c =b; //will not takes its address
//or
char *c =&b[0]; //will not takes its address
cout<<"c: "<<c<<endl; 
// and this is interesting it does not print the address but prints the entire string.
//char *c =&b[1];
//cout<<"c: "<<c<<endl; // will print the string from b[1] to end.
cout<<" b[0] "<<b[0]<<endl;
cout<<" c[0] "<<c[0]<<endl;
cout<<" &b[0] "<<&b[0]<<endl; // important.. address print karne ja rahe ho but address print ni hoga puri string
cout<<" &c[0] "<<&c[0]<<endl; //same
 // ye jo line 11 , 14 ,16 ,17 , 18 me ho raha hai ye kya ho raha hai --
 //tum pehle ye samjho jo jo int pointer hai vo int array ki tarah behave kare ga , jo notations ek int array ko use karne ke liye bni hai vo same notations se int pointer bhi yahe chije dega and vice versa ) and vice versa and jo char pointer hai vo char array ki tarah ki tarah behave kare ga and vice versa. (jo jo notations ek char array ko use karne ke liye bni hai vo same notations se char pointer bhi yahe chije dega and vice versa)
} 