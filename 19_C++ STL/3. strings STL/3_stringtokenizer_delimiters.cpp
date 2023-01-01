/*
char *strtok(char *s,char *delimiter) --> returns a character pointer , accepts a char array , accepts a char array of delimiter.char array is brake upon delimiter and hence token are generated upon each subsequent call
returns a token on each subsequent call
on the first call function should be present with argument for 's'
on subbsequent calls we should pass the string argument as well.
*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100]="Today,is a rainy,day";
    char *ptr=strtok(s,",");
    cout<<ptr<<endl;
    // ptr points to the first token of the given string
    cout<<ptr[0]<<" ";
    cout<<ptr[2]<<" ";
    cout<<ptr[5]<<" ";
    
     ptr=strtok(NULL,",");
     cout<<ptr<<endl; // is a rainy
     // now this  strtok maintains a static array, that maintains the state of the string. means next time if i dont get any char array, then it know where i was last time on the string .. and then it return the next token previous to last one. so we can maintain a loop upto it returns ptr as NULL


     while(ptr!=NULL)
     {
       ptr=strtok(NULL,",");
       cout<<ptr<<endl;
     }

}

