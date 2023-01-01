#include<iostream>
using namespace std;
int Partition(int a[],int si, int ei){
int pivot =a[si];
int count=0;
for(int i=si+1;i<=ei;i++){
    if(pivot>=a[i]){
        count++;
    }
}
int pivotIndex=count+si;
a[si]= a[pivotIndex];
a[pivotIndex]=pivot;
int i= si;
int j=ei;
while(i < pivotIndex && j > pivotIndex ){

if(a[i]<=pivot){
  i++;
}
else if(a[j]>pivot){
    j--;
}
else{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
}
}
return pivotIndex;
}
void QuickSort(int a[],int si, int ei){
    if(si>=ei){
        return ;
    }
    int c = Partition(a,si,ei);
    QuickSort(a,si,c-1);
    QuickSort(a,c+1,ei);
}
int main(){
    int a[15];
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    QuickSort(a,0,n-1);
    for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
}