#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"enter number:";
    cin>>n;
    while(i<=n){
        int k=i+1;
        int j=1;
        while(j<=i){
            k--;
            cout<<k;
            j++;
        }
        cout<<endl;
        i++;
    }
}
/*enter number:5
1
21
321
4321
54321*/