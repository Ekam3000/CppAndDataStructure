/*Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.
Do this recursively.
Input format :
Two integers x and n (separated by space)
Output Format :
x^n (i.e. x raise to the power n)
Constraints :
1 <= x <= 30
0 <= n <= 30
Sample Input 1 :
 3 4
Sample Output 1 :
81
Sample Input 2 :
 2 5
Sample Output 2 :
32 */
int power(int x, int n){
    if(n==0){
        return 1;
    }
    int smalloutput=power(x,n-1);
   // return pow(x,smalloutput);
      return x*smalloutput;
}
#include<iostream>
using namespace std;
//#include<math.h>

int main(){
    int x,n;
    cout<<"enter the number and power to which it is to be raised:";
    cin>>x>>n;
    //int c = pow(2,5);
   //  cout<<c<<endl;
    int output = power(x,n);
    cout<<output<<endl;
}