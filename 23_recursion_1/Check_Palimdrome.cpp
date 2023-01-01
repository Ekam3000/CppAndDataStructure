/*Check whether a given String S is a palindrome using recursion. Return true or false.
Input Format :
String S
Output Format :
'true' or 'false'
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
racecar
Sample Output 1:
true
Sample Input 2 :
ninja
Sample Output 2:
false
*/
#include<iostream>
using namespace std;
bool CheckPalimdrome(string s, int end,int start)
{
    int size=end-start;
if(size==0||size==1){
    return true;
}
if(s[start]!=s[end-1]){
    return false;
}
bool ans1=CheckPalimdrome(s,end-1,start+1);
return ans1;
}
int main(){
    string s;
    cin>>s;
    int start =0;
    int end= s.size();
    bool ans= CheckPalimdrome(s,end,start);
    if(ans){
        cout<<"true";
    }
    else
    cout<<"false";
}

