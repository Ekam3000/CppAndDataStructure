#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter number:";
    cin>>n;
    i=1;
    char k='A'+n-1;
    while(i<=n){
      j=1;
      while(j<=i){
          cout<<k;
          j++;
          k++;
      }
      cout<<endl;
      k='A'+n-1 -i;
      i++;
    }
    return 0;
}
/*enter number:5
E
DE
CDE
BCDE
ABCDE*/