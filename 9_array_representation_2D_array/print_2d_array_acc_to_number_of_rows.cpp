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

    for(int i=0;i<m;i++){
        for(int num=1; num<=(m-i);num++){
        for(int j=0;j<n;j++){
            cout<<array[i][j];
        }
        cout<<endl;
        }
        cout<<endl;
    }
}
/*1 2 3

4 5 6

7 8 9

123
123
123

456
456

789*/
