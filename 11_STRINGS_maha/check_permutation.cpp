#include<iostream>
#include<string.h>
using namespace std;
int main(){
  char str1[20] ;
  char str2[20] ;
  cin.getline(str1,20);
  int len1=strlen(str1);
  cin.getline(str2,20);
   int len2=strlen(str2);
  int array[256]={0};
  for(int i=0;i<len1;i++){
      int num;
      num=str1[i];
      array[num]=array[num]+1;
  }
  for(int i=0;i<len2;i++){
      int num;
      num=str2[i];
      array[num]=array[num]-1;
  }
  int flag=1;
  for(int i=0;i<256;i++){
      if(array[i]!=0){
          cout<<"false";
          flag=2;
          break;
      }
  }
  if(flag==1)
  cout<<"true";
}
/* dbjcbm
djsjkd
false

abcd
dcba
true

acd frgt#
acd frgt#
true*/