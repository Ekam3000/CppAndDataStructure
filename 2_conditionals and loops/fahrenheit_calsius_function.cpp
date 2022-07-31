#include<iostream>
using namespace std;
    double fahsius(int s){
        return (5.0/9)*(s-32);
    }
int main(){
 int S,E,W;
    cout<<"enter S,E,W:";
    cin>>S>>E>>W;
    for(S;S<=E;S=S+W){
        double C;
     C = fahsius(S);
    cout<<S<<"\t"<<C<<endl;
    }
}