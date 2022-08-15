#include<iostream>
using namespace std;
#include<string.h>
int main(){
    char str[30];
    cin>>str;
    int len=strlen(str);
    int i=1;
    int j=1;
    char lastchar=str[0];
    for(i;i<len;i++){
     if(lastchar!=str[i]){
         str[j]=str[i];
         j++;
         lastchar=str[i];
    }
    }
     str[j]='\0';
    cout<<str;

}