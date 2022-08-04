#include<iostream>
using namespace std;
int main(){
    int n, i=1,j;
    cout<<"enter number:";
    cin>>n;
    char k='A';
    while(i<=n){
      j=1;
      while(j<=i){
          cout<<k;
          j++;
      }
      cout<<endl;
      i++;
      k= 'A'+i;
    }
    return 0;
}
/*enter number:5
A
CC
DDD
EEEE
FFFFF*/