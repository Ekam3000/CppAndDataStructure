/*Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
using recursion.
Input format :
Integer k
Output format :
Geometric sum (upto 5 decimal places)
Constraints :
0 <= k <= 1000
Sample Input 1 :
3
Sample Output 1 :
1.87500
Sample Input 2 :
4
Sample Output 2 :
1.93750
*/
#include<iostream>
using namespace std;
#include<math.h>
double GeometricSum(int k){
    if(k==0){
        return 1;
    }
   double ans= GeometricSum(k-1);
   ans= ans+ 1.0/pow(2,k);
   return ans;

}
int main(){


    int k;
    cin>>k;
    double  c = GeometricSum(k);
    cout<<c<<endl;
}

