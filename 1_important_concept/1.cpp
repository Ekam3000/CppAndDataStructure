#include <iostream>

using namespace std;

int main()
{
    int array[256];
//1. char nextchar='a';
   int nextchar='a';
 for(int i=0;i<256;i++){
     array[i]=-1;
 }
// next char used as integer 
 array[nextchar]=9;
 cout<<nextchar;
 cout<<array[nextchar];
 cout<<array[97];

    return 0;
}