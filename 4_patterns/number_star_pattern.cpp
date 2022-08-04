#include<iostream>
using namespace std;
int main(){
    int n,i,j;

    cout<<"number of rows:";
    cin>>n;
    i=n;
    while(i>=1){
        j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        while(j<=n){
            cout<<"*";
          j++;
        }
        j--;
        while(j>i){
            cout<<"*";
            j--;
        }
        while(j>=1){
            cout<<j;
            j--;
        }
       cout<<endl;
       i--;
    }
}
/*
number of rows:5
1234554321
1234**4321
123****321
12******21
1********1
*/