 #include<iostream>
 using namespace std;
 string removeDuplicate(string &s)
{
    // Write your code here
    if(s.size()==0)
    {
        return s;
    }
    if(s[0]==s[1])
    {
        s.erase(s.begin());
        removeDuplicate(s.substr(1));
    }
    else
    {
            removeDuplicate(s.substr(1));
    }
    return s;
}

int main()
{
    string s = 'aazbbby';
    cout<<removeDuplicate(s);

}