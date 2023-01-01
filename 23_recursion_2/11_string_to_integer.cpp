/*Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
Input format :
Numeric string S (string, Eg. "1234")
Output format :
Corresponding integer N (int, Eg. 1234)
Constraints :
0 <= |S| <= 9
where |S| represents length of string S.
Sample Input 1 :
00001231
Sample Output 1 :
1231
Sample Input 2 :
12567
Sample Output 2 :
12567
*/
#include<iostream>
#include<math.h>
using namespace std;
int StringToInteger(string s){
    if(s.length()==1){
        return s[0]-'0';
    
        
    }
    int b= StringToInteger(s.substr(1));
    int c= s[0]-'0';
    return c*pow(10,s.size()-1) + b;

}
int main(){
    string s;
    cin>>s;
  int c=  StringToInteger(s);
  cout<<c<<endl;
}
/*
1234
1233
*/