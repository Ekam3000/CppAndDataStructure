#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=1;k<=2*n-2*i;k++){
            cout<<" ";
        }
        for(int l=i;l>=1;l--){
            cout<<l;
        }
        cout<<endl;
    }
}
/*enter number5

1        1
12      21
123    321
1234  4321
1234554321
*/