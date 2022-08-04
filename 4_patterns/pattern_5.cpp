#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cin>>n;
        int j=1;
    while(i<=n){
        int l=1;
        while(l<=n-i){
            cout<<" ";
            l++;
        }
        int k=1;
        while(k<=i){
            cout<<j;
            j++;
            k++;
        }
        cout<<endl;
        i++;
        j=i;
    }
    return 0;
}
/*5

    1
   23
  345
 4567
56789
*/