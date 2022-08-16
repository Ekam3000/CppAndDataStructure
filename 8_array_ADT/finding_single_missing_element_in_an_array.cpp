/*ex--> 
given array can be {1,2,3,4,5,7,8,9}
or
{6,7,8,9,10,11,13,14,15}.
*/

//if array is of the type--> {1,2,3,4,5,7,8,9}

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[15];
    for(int i=0;i<n-1;i++){
        cin>>A[i];
        cout<<"\t";
    }
    int s= (n*(n+1))/2;

    int sum=0;
    for(int i=0;i<n-1;i++){
        sum=sum+A[i];
    }

    int diff =s-sum;
    cout<<endl<<"missing element:"<<diff;
}
*/
//if array is of the type--> {6,7,8,9,10,11,13,14,15}.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[15];
    for(int i=0;i<n;i++){
        cin>>A[i];
        cout<<"\t";
    }
    int diff= A[0] -0;
    int missingElement;
    for(int i=0;i<n-1;i++){
        if((A[i]-i) !=diff){
            missingElement= i+ diff;
            break;
        }
    }
    cout<<endl<<"missing element:"<<missingElement;
}