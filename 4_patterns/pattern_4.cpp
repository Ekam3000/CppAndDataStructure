#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cin>>n;
      int j=1;
    while(i<=n){
        int k=1;
        while(k<=i){
            cout<<j<<"\t";
            k++;
            j++;
        }
        cout<<endl;
        i++;
        j=i;
    }

}
/*5
1
2       3
3       4       5
4       5       6       7
5       6       7       8       9
*/