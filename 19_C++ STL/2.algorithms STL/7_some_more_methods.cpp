#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int a=2,b=3;
    swap(a,b);
    cout<<a<<" "<<b<<"\n";
    
    cout<<min(a,b)<<"\n";
    cout<<max(a,b)<<"\n";
    int arr[]={1,2,3,4,4,5};
    vector<int> v ={1,2,3,4,4,5};
    int n=sizeof(arr)/sizeof(int);
    reverse(arr,arr+4); //4 3 2 1 4 5
    reverse(v.begin(), v.begin() +4); 
    swap(arr[0],arr[1]); 
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "; // 3 4 2 1 4 5

    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "; // 4 3  2 1 4 5
        
    }

}