#include<iostream>
using namespace std;
int main(){
    int t_s,b_s,allow;
    float hra,da,pf;
    char g;
    cout<<"enter the basic salary and the grade";
    cin>>b_s;
    cout<<endl;
    cin>>g;
    cout<<endl;
    if(g=='A'){
        allow=1700;
    }
    if(g=='B'){
        allow=1500;
    }
    if(g=='C'){
        allow=1300;
    }
    hra=0.2*b_s;
    da=0.5*b_s;
    pf=0.11*b_s;
    t_s= b_s+hra+da+allow-pf;
    cout<<"total salary:"<<t_s;
}