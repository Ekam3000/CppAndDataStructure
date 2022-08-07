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
        
        int k=1;
        while(k<=i){
            cout<<"*";

            k++;
        }
       int j=i-1;
        while(j>=1){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
/*5
    *
   ***
  *****
 *******
*********          */
