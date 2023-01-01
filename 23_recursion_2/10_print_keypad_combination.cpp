/*Print Keypad Combinations Code
Send Feedback
Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.
Note : The order of strings are not important. Just print different strings in new lines.
Input Format :
Integer n
Output Format :
All possible strings in different lines
Constraints :
1 <= n <= 10^6
Sample Input:
23
Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf
*/
#include<iostream>
using namespace std;
 string getString(int d){
     if(d==2){
         return "abc";
     }
     if(d==3){
         return "def";
     }
     if(d==4){
         return "ghi";
     }
     if(d==5){
         return "jkl";
     }
     if(d==6){
         return "mno";
     }
     if(d==7){
         return "pqrs";
     }
     if(d==8){
         return "tuv";
     }
     if(d==9){
         return "wxyz";
     }
     else
         return " ";
      }
 void printkeypad(int n, string outputSoFar){
     if(n==0||n==1){
         cout<<outputSoFar<<endl;
         return ;
     }
     int lastDigit =n%10;
     int smallNumber=n/10;
     string options =getString(lastDigit);
     for(int i=0;i<options.size();i++){
     printkeypad(smallNumber,options[i]+outputSoFar) ;   
     }
 }
 int main(){
     int n;
     cin>>n;
     printkeypad(n,"");
 }

 
