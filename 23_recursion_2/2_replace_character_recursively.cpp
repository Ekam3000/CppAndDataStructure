/*Replace Character Recursively
Send Feedback
Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
Do this recursively.
Input Format :
Line 1 : Input String S
Line 2 : Character c1 and c2 (separated by space)
Output Format :
Updated string
Constraints :
1 <= Length of String S <= 10^6
Sample Input :
abacd
a x
Sample Output :
xbxcd
*/
#include<iostream>
using namespace std;
void Replace_Character(char *s , char c, char ch){
    if(s[0]=='\0'){
        return;
    }
    if(s[0]==c){
        s[0]=ch;
        Replace_Character(s+1,c,ch);
    }
    else{
        Replace_Character(s+1,c,ch);
    }
}
int main(){
    char s[20];
    cin.getline(s,20);
    cout<<s<<endl;
    char c,ch;
    cin>>c>>ch;
    Replace_Character(s,c,ch);
    cout<<s<<endl;


}