#include<iostream>
using namespace std;
const char*fun(){
    return "Rain";
}
int main(){
    const char *p; // becomes read only operation
    p=fun();
    *p='A'; //error
    cout<<p;
    return 0;
}