#include<iostream>
using namespace std;
int main()
{
    // void pointer 
    void *ptr1;
    char *s; 
    ptr1=s;
    //s=ptr;// error 
   // while you can assign a pointer of any type to a void pointer , the reverse is not true 
   s=(char*)ptr1;
   cout<<s<<endl;
}