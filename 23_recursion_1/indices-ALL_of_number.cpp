/*Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order).
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
indexes where x is present in the array (separated by space)
Constraints :
1 <= N <= 10^3
Sample Input :
5
9 8 10 8 8
8
Sample Output :
1 3 4
*/
#include<iostream>
using namespace std;
// y is size of the array.
//output is the output array of all indices 
//ans is telling that how many times the elemts occurs.
int All_Indices_Of_A_Number(int *array,int size,int x,int y, int *output,int &ans){
    if(size==0){
        return ans;
    }
    if(*array==x){
        *output= y-size;
        output+=1;
        ans+=1;
    }
    int c=All_Indices_Of_A_Number(array+1,size-1,x,y,output,ans);
     return c;
}
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int array[10];
    int output[10];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int y=n;
     int ans=0;
    int  c = All_Indices_Of_A_Number(array,n,x,y,output,ans);
    for(int i=0;i<c;i++){
        cout<<*(output+i)<<" ";
    }
    cout<<c<<endl;
}
