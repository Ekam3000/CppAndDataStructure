#include<iostream>
using namespace std;
int main(){
    int rem,n,sum1e=0,sum2o=0;
    cout<<"enter number:";
    cin>>n;
    while(n>=0){
    rem=n%10;
      n=n/10;
    if(rem%2==0){
        sum1e=sum1e+rem;
    }
    else{
        sum2o=sum2o+rem;
        }
    }
    cout<<"the sum of even and odd numbers are respectively:"<<sum1e<<"\t"<<sum2o;
}