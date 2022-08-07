#include<iostream>
using namespace std;
int main(){
    int i,j,n,n1,n2;
    cout<<"enter number of rows:";
    cin>>n;
    n1=(n+1)/2;
    n2=n1-1;
    i=1;
    while(i<=n1){
        int k=1;
        while(k<=n1-i){
            cout<<" ";
            k++;
        }
        j=1;
        while(j<=2*i-1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    int i1,j1,k1;
     i1=n2;
    while(i1>=1){
        int k1=1;
        while(k1<=n2-i1+1){
            cout<<" ";
            k1++;
        }
        j1=1;
        while(j1<=2*i1-1){
            cout<<"*";
            j1++;
        }
        cout<<endl;
        i1--;
    }
}
/*enter number of rows:9
    enter number of rows:9
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *                */