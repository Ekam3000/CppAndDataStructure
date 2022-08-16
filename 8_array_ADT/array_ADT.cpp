#include<iostream>
using namespace std;
void Display( int *arr,int n){
    int i;
    cout<<"elements are\n";
    for(i=0;i<n;i++)
    cout<<" \t"<<arr[i];
}
int main(){
    int *A;
    int n,i,N;
    cout<<"enter size of an array \n";
    cin>>N;
    A=new int[N];
    cout<<"enter number of numbers";
    cin>>n;
    printf("enter the elements \n");
    for(i=0;i<n;i++){
    cin>>A[i];
    }
    Display(A,n);
}