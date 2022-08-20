#include<iostream>
using namespace std;
int main(){
    string s;
    //important
    getline(cin,s);
    char array[10];
    int j=0;
    char c;
    c=s[0];
    int count=0;
    int k=0;
    int array1[10];
    for(int i=0;i<=s.size();i++){
        if(c==s[i]){
            count++;
        }
           if(c!= s[i]){
           c=s[i];
           array[j++]=s[--i];
           array1[k++]=count;
           count=0;
           }
    }
    for(int i=0;i<j;i++){
     cout<<array[i]<<array1[i];
    }
}