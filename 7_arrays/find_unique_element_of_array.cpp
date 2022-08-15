#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    int array[10];
    int i=0;
    for(i;i<n;i++){
        cin>>array[i];
        cout<<endl;
    }
    int j=0;
    for(j;j<n;j++){
        int k=0;
        int flag=1;
        for(k;k<n; k++){
            if(j!=k){
            if(array[j]==array[k]){
               flag=2;
               break;
            }
            }
        }
        if(flag==1){
             cout<<"unique element:"<<array[j]<<endl;
        }
    }
}
/*
enter number
7
3 4 4 5 5 6 6

unique element:3
*/