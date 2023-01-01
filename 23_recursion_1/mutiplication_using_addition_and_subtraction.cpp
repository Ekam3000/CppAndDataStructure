/*Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.
Input format :
Line 1 : Integer M
Line 2 : Integer N
Output format :
M x N
Constraints :
0 <= M <= 1000
0 <= N <= 1000
Sample Input 1 :
3 
5
Sample Output 1 :
15
Sample Input 2 :
4 
0
Sample Output 2 :
0
*/
#include<iostream>
using namespace std;
/*int Multiplication(int m, int n){
    if(n==0){
        return 0;
    }
    int c = Multiplication(m,n-1);
    m = m+c;
     return m;
     }
     */
int Multiplication(int m, int n,int &sum){
    if(n==0){
        return sum;
    }
    sum+=m;
     Multiplication(m,n-1,sum);

}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
     int sum=0;
   // int  ans = Multiplication(m,n);
    int  ans = Multiplication(m,n,sum);
    cout<<ans<<endl;
}

