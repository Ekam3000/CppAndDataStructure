#include<iostream>
using namespace std;
int main(){
    int n,n1,n2;
    cout<<"enter number:"<<endl;
    cin>>n;
    n1=(n+1)/2;
    n2=n/2;
    for(int i=1;i<=n1;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
            cout<<" ";
        }
        cout<<endl;
    }
    int i=1;
    for(int l=n2;l>=1;l--){
        for(int j=n2-i;j>=1;j--){
            cout<<" ";
        }
        i++;
        for(int k=l;k>=1;k--){
            cout<<"*";
            cout<<" ";
        }
        cout<<endl;
    }

}
/*enter number:
5
* 
 * *
  * * *
 * *
*                    */