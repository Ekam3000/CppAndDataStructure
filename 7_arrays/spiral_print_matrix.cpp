#include<iostream>
using namespace std;
int main(){
    int array[6][6];
    int m,n;
    cout<<"enter number of rows and columns:";
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>array[i][j];
        }
        cout<<endl;
    }
    int num=0;
    int k=0;
    int rs=0;
    int ce=n-1;
    int re=m-1;
    int cs=0;
    while(num<m*n){
            if(rs<m){
           for(int j=0+rs;j<n-rs;j++){
               cout<<array[rs][j];
               num++;
           }
           rs++;
        }
        if(num<m*n){
            if(ce>=0){
            for(int i=0+rs;i<m-rs;i++){
               cout<<array[i][ce];
               num++;
           }
           ce--;
            }
        }
        if(num<m*n){
            if(re>=0){
            for(int j=n-1-k;j>=0+k;j--){
               cout<<array[re][j];
               num++;
           }
           re--;
           k++;
            }
        }
        if(num<m*n){
            if(cs<n){
            for(int i=m-1-rs;i>=0+rs;i--){
               cout<<array[i][cs];
               num++;
           }
            cs++;
           }
        }
    }
}

/*
enter number of rows and columns:3 3
1 2 3

4 5 6

7 8 9

1236987454
*/

