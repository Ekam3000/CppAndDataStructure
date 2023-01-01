/*Sum of digits (recursive)
Send Feedback
Write a recursive function that returns the sum of the digits of a given integer.
Input format :
Integer N
Output format :
Sum of digits of N
Constraints :
0 <= N <= 10^9
Sample Input 1 :
12345
Sample Output 1 :
15
Sample Input 2 :
9
Sample Output 2 :
9*/
#include<iostream>
using namespace std;
int SumOfDigits(int n,int &sum){
    if(n==0){
        return sum;
    }
    int rem= n%10;
    sum +=rem;
    n=n/10;
    SumOfDigits(n,sum);
}
int main(){
    int n;
    cin>>n;
     int ans=0;
    int  c = SumOfDigits(n,ans);
    cout<<c<<endl;
}
