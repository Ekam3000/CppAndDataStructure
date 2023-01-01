
#include<iostream>
using namespace std;
void merge(int a[], int si, int ei){
int size= ei-si+1;
int mid= (si+ei)/2;
int *out= new int[size];
int i=si;
int j=mid+1;
int k=0;
while(i<=mid &&j<=ei){
    if(a[i]>=a[j]){ 
        out[k++]=a[j++];
    }
    else{
        out[k++]=a[i++];
    }
}
while(i<=mid){
    out[k++]=a[i++];

}
while(j<=ei){
    out[k++]=a[j++];
}
int l=0;
for(int i = si;i<=ei;i++){
    a[i]=out[l++];
}
delete []out;
}

void merge_sort(int a[], int si, int ei){
 if(si>=ei){ // si>=ei means u r working on an empty array 
      return;
  }
 int mid= (si+ei)/2;
  merge_sort(a,si,mid);
  merge_sort(a,mid+1,ei);
  merge(a,si,ei);
}
int main(){
    int a[15];
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
}
