#include<iostream>
using namespace std;
int main(){
int index[20][20];
    int m,n;
    cout<< "enter number of rows and column"<<endl;
    cin>>m>>n;
     cout<<"enter the elements for given number of rows and column"<<endl;
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>index[i][j];
        }
    }
     //print array column wise
     cout<<"column wise sum:"<<endl;
    for(int j=0;j<n;j++){
        int sum=0;
        for(int i=0;i<m;i++){
            sum +=index[i][j];
}
cout<<sum<<" ";
    }
}