// lifo
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>s;
    // internally stack can be of any type array/vector/LL//dynamic array.generally vector and dynamic array are used becoz in thse size restriction in not there.
    for(int i=0;i<=5;i++)
    {
        s.push(i);
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}