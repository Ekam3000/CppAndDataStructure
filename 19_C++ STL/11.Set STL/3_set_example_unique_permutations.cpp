// to permute a string like abb
// and all strings should be unique and placed in sorted order
// then permute fun() of set can be used.
#include<iostream>
#include<set>
#include<cstring>
using namespace std;
void permute(char a[],int i,set<string> &s)
{
    if(a[i]=='\0')
    {
        string t(a);// string t ke andar a string store kar dii jo ki output me print hone thi.
        s.insert(t); // t ko set ke andar insert kar diya. so repeated strings vanishes
        return;
    }
    // recursive case
    for(int j=i;a[j]!='\0';j++)
    {
        swap(a[i],a[j]);
        permute(a,i+1,s);
        swap(a[i],a[j]);
    }
}
int main()
{
    char a[100];
    cin>>a;
    set<string> s;
    permute(a,0,s);
    for(auto t:s)
    {
        cout<<t<<" ";
    }
    return 0;
}
/*
void permute(char a[],int i)
{
    if(a[i]=='\0')
    {
        cout<<a<<endl;
        return;
    }
    // recursive case
    for(int j=i;a[j]!='\0';j++)
    {
        swap(a[i],a[j]);
        permute(a,i+1);
        swap(a[i],a[j]);
    }
}
int main()
{
    char a[100];
    cin>>a;
    permute(a,0);
    return 0;
}
// in this case i will get repeated words.
*/