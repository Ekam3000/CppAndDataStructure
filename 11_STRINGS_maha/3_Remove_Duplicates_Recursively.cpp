/*Remove Duplicates Recursively
Send Feedback
Given a string S, remove consecutive duplicates from it recursively.
Input Format :
String S
Output Format :
Output string
Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string
Sample Input 1 :
aabccba
Sample Output 1 :
abcba
Sample Input 2 :
xxxyyyzwwzzz
Sample Output 2 :
xyzwz
*/
#include <iostream>
using namespace std;
void Remove_Duplicates(char *s)
{
    if (s[0] == '\0')
    {
        return;
    }
    if (s[0] == s[1])
    {
        int i = 1;
        for (; s[i] != '\0'; i++)
        {
            s[i - 1] = s[i];
        }
        s[i - 1] = s[i];
        Remove_Duplicates(s);
    }
    else
    {
        Remove_Duplicates(s + 1);
    }
}
int main()
{
    char s[30];
    cin.getline(s, 30);
    Remove_Duplicates(s);
    cout << s << endl;
}