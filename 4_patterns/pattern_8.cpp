#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
      int j=1;
      char k='A';
        while(j<=n){
            cout<<k;
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
/*5
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
*/