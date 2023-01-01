/*Given the code to find out and return the number of digits present in a number recursively. But it contains few bugs, that you need to rectify such that all the test cases should pass.
Input Format :
Integer n
Output Format :
Count of digits
Constraints :
1 <= n <= 10^6
Sample Input 1 :
 156
Sample Output 1 :
3
Sample Input 2 :
 7
Sample Output 2 :
1
*/
/*#include<iostream>
using namespace std;
void NumberOfDigits(int &a, int n){
    if(n==0){
        return;
    }
    n=n/10;
    a++;
    NumberOfDigits(a,n);
}
int main(){
    int n;
    cout<<"enter number:"<<endl;
    cin>>n;
    int a=0;
    NumberOfDigits(a,n);
    cout<<a;
}*/
#include<iostream>
using namespace std;
int NumberOfDigits( int n){
    int a;
    if(n==0){
        return 0;
    }
    n=n/10;
   a = NumberOfDigits(n);
    a++;
    return a;
}
int main(){
    int n;
    cout<<"enter number:"<<endl;
    cin>>n;
   int c= NumberOfDigits(n);
    cout<<c;
}