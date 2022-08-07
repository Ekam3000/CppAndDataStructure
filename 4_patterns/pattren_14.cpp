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
        j=i-1;
        while(j>=1){
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
/*5
    1
   121
  12321
 1234321
123454321
*/