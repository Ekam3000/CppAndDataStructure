#include<iostream>
using namespace std;
int main(){
    int x,n1,n2;
    cout<<"enter number:"<<endl;
    cin>>x;
    n1=x;
    n2=x-1;
    int m=0;
    int n=0;
    int k;

    for(int i=1;i<=n1;i++){
        for( k=n1;k>n1-n;k--){
            cout<<k;
        }
        n++;
        int o=n1-m;
        for(int j=1;j<=2*n1-1-2*m;j++){
            cout<<o;
        }
        m++;
        int l=++k;
        for(l;l<=n1;l++){
            cout<<l;
        }
        cout<<endl;
    }
}
/*enter number:
5
555555555
544444445
543333345
543222345
543212345
*/