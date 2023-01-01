/*Infix to postfix
Send Feedback
Given an infix expression S in the form of a string. You need to convert and print that input expression in postfix form. After that, evaluate and print the result of given expression in next line.
Input Format :
Infix expression
Output Format :
Line 1 : Corresponding postfix expression
Line 2 : Result of input expression after evaluation
Constraints :
1 <= Length of S <= 100
Sample Input 1 :
3+4
Sample Output 1 :
34+
7
Infix expression: The expression of the form a op b. When an operator is in-between every pair of operands.
Postfix expression: The expression of the form a b op. When an operator is followed for every pair of operands.
*/

/*
Input : 456++
Output : (4+(5+6))

Input  : 45*6+
Output : ((4*5)+6)
*/
#include <bits/stdc++.h>
using namespace std;
bool isOperand(char x)
{
    return (x >= 'a' && x <= 'z');
}
void getPostfix(string exp)
{
    stack<string> ch;
    char s[15];
    int i = 0;
    for (int i = 0; i < exp.length(); i++)
    {
        if (isOperand(exp[i]))
        {
            s[i++] = exp[i];
        }
        else
        {
            if (ch.empty())
            {
                ch.push(exp[i]);
            }
            else
            {
                if (exp[i] <= ch.top())
                {
                    while (exp[i] <= ch.top())
                    {
                        s[i++] = ch.top();
                        ch.pop();
                        if (ch.empty())
                        {
                            ch.push(exp[i]);
                        }
                    }
                }
                else
                {
                    ch.push(exp[i]);
                }
            }
        }
    }
    while (1)
    {
        s[i++] = ch.top();
        ch.pop();
        if (ch.empty())
        {
            break;
        }
    }
    cout << s;
}
int main()
{
    string exp = "a+b*c-d/e";
    getPostfix(exp);
    return 0;
}
