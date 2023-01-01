/*Replace pi (recursive)
Send Feedback
Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
Sample Input 1 :
xpix
Sample Output :
x3.14x
Sample Input 2 :
pipi
Sample Output :
3.143.14
Sample Input 3 :
pip
Sample Output :
3.14p
*/
#include<iostream>
#include<string.h>
using namespace std;
void replacePi(char* s){
    if(strlen(s)<=1){
        return ;
    }
    replacePi(s+1);
    if(s[0]=='p' &&s[1]=='i'){
        for(int i=strlen(s);i>1;i--){
            s[i+2]=s[i];
        }
        s[0]='3';
        s[1]='.';
        s[2]='1';
        s[3]='4';
    }
}
int main(){
    char ch[30];
    cin>>ch;
    replacePi(ch);
    cout<<ch;

}