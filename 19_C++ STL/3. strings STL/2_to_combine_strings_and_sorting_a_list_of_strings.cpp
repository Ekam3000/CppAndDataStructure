#include <iostream>
// use cstring or string.h
#include <cstring>
#include <algorithm>
using namespace std;
bool compare(string a,string b)
{
    if(a.length()==b.length())
    {
        return a<b;
    }
    return a.length()>b.length(); 
}
int main()
{
    int n;
    cin >> n;
    cin.get();// the enter that we press after entering no. of strings while giving input, will not be counted as string.
    string s[10]; // for storing the number of strings.
    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    } 
    // now sorting the strings. in strings the comparison is based upon the lexographical ordering.
    sort(s, s + n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}
/*

3
apple juice 
mango juice 
banana shake
output--
apple juice 
banana shake
mango juice 

//lexographical comparison of these three words are apple juice banana shake mango juice.
laxographical comparison -->
comparison generally used to sort words alphabetically in dictionaries
*/