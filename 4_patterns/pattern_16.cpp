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
         j=j-2;
        while(j>(i-1)){
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
        j=i;
    }
    return 0;
}
/*5
    1
   232
  34543
 4567654
567898765
*/