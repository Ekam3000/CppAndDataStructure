#include<iostream>
using namespace std;
 int main(){
   int i=65;
   char c =i;
   cout<<"given character"<<" "<<c<<endl;

 //one pointer taking the address of int i.
   int * p =&i;
   
 //now consider below line of code which will throw error as int* pointer ko  char* pointer me nahi daal sakte->
 //  char *pc = p;


   //so explicitly typecasting
   // as ye char pointer hai to ye 1 byte hi lega out of the total 4 bytes taken by int 65. now  as interger is written like this in compiler 
   /* 1st byte   2nd byte  3 byte  sign bit
        65          0       0       0 */
   char *pc =(char*)p;
   cout<<"given character printed by a pointer" <<" "<<*p<<endl;
   cout<<"value printed by a character pointer taking the first byte (1 byte of number 65)"<<" "<<*pc<<endl;
   cout<<"fourth output -"<<" "<<*(pc+1)<<endl;
   cout<<"fifth output-"<<" "<<*(pc+2)<<endl;
   cout<<"sixth output -"<<" "<<*(pc+3)<<endl;
   cout<<"*(pc+4) output -"<<" "<<*(pc+4)<<endl; // will print random characte kuch bhi ho sakta hai vo
   cout<<"7th output -"<<" "<<p<<endl;
   // as pc is character pointer so it will print upto it finds the null character
   cout<<pc<<endl;
   cout<<(void *)pc<<endl; // this will print the address
   char j ='A';
   char *ptr =&j;
   int *ptr1=(int*)ptr;
   cout<<"8th output -"<<" "<<ptr<<endl; // as ptr is character pointer so it will print upto it finds the null character
   cout<<"9th output -"<<" "<<ptr1<<endl;
   cout<<"10th output -"<<" "<<*ptr<<endl;
   cout<<"11th output -"<<" "<<*ptr1<<endl;

 }
 /*
given character A
given character printed by a pointer 65
value printed by a character pointer taking the first byte (1 byte of number 65) A
fourth output -
fifth output-
sixth output -
7th output - 0x61fef8
A
8th output - AA
9th output - 0x61fef7
10th output - A
11th output - 16705
*/