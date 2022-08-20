#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int array[256]={0};
    char c;
    for(int i=0;i<s.size();i++){
        c=s[i];
        array[c]++;
    }
    int max = 0;
    int j;
    for(int i=0;i<256;i++){
           if(max<array[i]){
               max=array[i];
               j=i;
           }
    }
    char ch;
    ch=j;
    cout<<ch;
}