#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={110,11,9,100};
    int n=sizeof(arr)/sizeof(int);
    // to search an element in an array
    int key;
    cin>>key;
    auto it=find(arr,arr+n,key);
    // the auto are used for providing the data type of the iterator,(the suitable function(here it is find()) stored in algorithm returns a iterator with the required data type,the auto has also that same data type)
    // arr+n-> this points to position next to last index array box
    cout<<it<<endl;// this will give uss the address of the memory box where 11 is present.
    int index =it-arr; // this equals to difference between the two indexes of two boxes 
    if(index==n)
    {
     cout<<"element not present";
    }
    else
    {
     cout<<index;

    }
}
