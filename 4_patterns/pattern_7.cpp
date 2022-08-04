#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    char k='A';
    while(i<=n){
      int j=1;
        while(j<=n){
            cout<<k;
            k++;
            j++;
        }
        cout<<endl;
        k='A'+i;
        i++;
    }
    return 0;
}
/*5
ABCDE
BCDEF
CDEFG
DEFGH
EFGHI
*/