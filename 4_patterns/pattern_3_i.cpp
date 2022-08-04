#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cin>>n;
    while(i<=n){
        int l=1;
        while(l<=n-i){
            cout<<" ";
            l++;
        }
        int j=1;
        int k=1;
        while(k<=i){
            cout<<j;
            j++;
            k++;
        }
         cout<<endl;
        i++;
    }
    return 0;
}
/*5
    1
   12
  123
 1234
12345
*/