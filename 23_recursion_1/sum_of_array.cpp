/*
Given an array of length N, you need to find and return the sum of all elements of the array.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Sum
Constraints :
1 <= N <= 10^3
Sample Input 1 :
3
9 8 9
Sample Output 1 :
26
Sample Input 2 :
3
4 2 1
Sample Output 2 :
7    
*/
#include<iostream>
using namespace std;
int Sum_Of_Array(int a[], int size){
    int sum;
if(size==0){
    return 0;
}
 int c= Sum_Of_Array(a+1,size-1);
 sum = c+ a[0];
 return sum;

}
int main(){
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int a[15];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c = Sum_Of_Array(a,n);
    cout<<c<<endl;
}