/*Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
First index means, the index of first occurrence of x in the input array.
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
first index or -1
Constraints :
1 <= N <= 10^3
Sample Input :
4
9 8 10 8
8
Sample Output :
1
*/
#include<iostream>
using namespace std;
int  Index(int *array, int n, int x){
    if(n==0){
        return -1;
    }
    //isme first element ke liye hum solve kar rahe hai (n-1) elements hum recursive call ke liye rakh rahe hai.
    // isme pehle hum small calculation wala step perform kar rahe hai fir hum recursive call kar rahe hai.
    if(*array ==x){
        return 0;
    }
    int number= Index(array+1,n-1,x);
    if(number==-1){
        return -1;
    }
    number +=1;
    return number; 
   /* if(n==0){
        return -1;
    }
    int number = Index(array+1,n-1,x);
    if(*array ==x){
        return 0;
    }
    if(number==-1){
        return -1;
    }
    number +=1;
    return number;

}*/
int main(){
    int n;
    cin>>n;
    int array[10];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int x;
    cin>>x;
    int  c = Index(array,n,x);
    cout<<c<<endl;
}
