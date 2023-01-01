#include<iostream>
using namespace std;
int main(){
    int n,p;
    cout<<"enter array size number for two array's:"<<endl;
    cin>>n>>p;
    int array[20],array1[20];
    int i=0;
    for(i;i<n;i++){
        cin>>array[i];
        cout<<endl;
    }
    int j=0;
    for(j;j<p;j++){
        cin>>array1[j];
        cout<<endl;
    }
    int k=0;
    for(k;k<n;k++){
        int l=0;
        for(l;l<p; l++){
            if(array[k]==array1[l]){
               cout<<"duplicate element:"<<array[k];
            }
        }
    }
}