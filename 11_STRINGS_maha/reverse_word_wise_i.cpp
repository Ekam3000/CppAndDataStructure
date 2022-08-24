/*#include<iostream>
using namespace std;
int main(){
   char str[20];
   cout<<"enter string:"<<endl;
   cin.getline(str,20);
     cout<<"given string:"<<endl;
     cout<<str;
     int count=0;
     int k=0;
     while(str[k]!='\0'){
        count++;
        k++;
     }
     char str1[30];
     int l=count-1;
     int i=count-1;
     for(int j=0;j<count;j++){
     for(i;str[i] !=' '&&i>=0;i--){
     }
      int m;
      m=++i;
     for(m;m<=l;m++){
         str1[j++]=str[m];
     }
     str1[j]=' ';
     i=i-2;
     l=i;
}
cout<<endl;
cout<<str1;
}*/

/*#include<iostream>
#include<string.h>
using namespace std;
int main(){
     char a[]="abc de f gh";
	  strrev(a);
     strcat(a," ");
     int len=strlen(a);

 	cout<<a<<endl;
  int position=0;
   for(int i=0;i<len;i++){
     if(a[i]==' '&&a[i+1]!=' '){
       for(int j=i-1;j>=position;j--){
         cout<<a[j];
       }
       cout<<" ";
       position=i+1;
     }
   }
    return 0;
}
*/