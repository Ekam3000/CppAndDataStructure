#include <iostream>
using namespace std;

int  fib(int n) {
	if(n==0||n==1){
        return n;
    }
    return 
    fib(n-1)+fib(n-2);
}

int main() {
    int n;
    cout<<"enter the number of the terms in the ficonacci series:";
    cin>>n;
    int i=0;
    while(i<n){
      cout<<fib(i)<<" ";
      i++;
    }
}
