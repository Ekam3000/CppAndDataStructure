#include<iostream>
using namespace std;
int main(){
int a[5]={1,2,3,4,5};
char b[]="abc";
cout<<"1. "<<a<<endl;
cout<<"b: "<<b<<endl;
//important
cout<<"2. "<<b+1<<endl;
char *c =&b[0]; //woll not takes its address
cout<<"c: "<<c<<endl; 
//and this is interesting it does not print the address but prints the entire string.
//char *c =&b[1];
//cout<<"c: "<<c<<endl; // will print the string from b[1] to end.
cout<<" b[0] "<<b[0]<<endl;
cout<<" c[0] "<<c[0]<<endl;
cout<<" &b[0] "<<&b[0]<<endl; // important.. address print karne ja rahe ho but address print ni hoga puri string print hogi char pointer ki tarah
cout<<(void *)c<<endl; 
cout<<(void *)b<<endl;
cout<<(void *)(c +1)<<endl; 
cout<<(void *)(b +1)<<endl; 
 c++;
 cout<<" c[0] "<<c[0]<<endl;
 cout<<" c: "<<c<<endl;
//b++; // given array me aapa esse incrementation nii kar sakte 
b[1]='x'; //valid hai
cout<<"c: "<<c<<endl; 
cout<<"3. "<<c +1<<endl;
cout<<"4. "<<*(c +1)<<endl;
char c1='a'; 
char *pc= &c1;
cout<<"c1: "<<c1<<endl;
// pc will starts printing till the point it finds its null character 
cout<<"5. "<<pc<<endl;
cout<<"6. "<<*pc<<endl;
cout<<"*(pc +1) "<<*(pc +1)<<endl; // will print random character (kuch bhi print kar sakta)
//char str[] ="abcde";
// this above statement will make an array of its own space  contaning c characters including null character.
//char *pstr="abcde";
// pstr will points toward the temporary memory which is not its own memory.
char ch ='a';
char *ptr =&ch;
ch++;
cout<<"7. "<<*ptr<<endl;
char x[] ="xyz";
char *y =&x[0];
y++;
cout<<"8. "<<y[0]<<endl;
cout<<"y[1] "<<y[1]<<endl;
char s[] ="hello";
char *p=s;
cout<<"9. "<<s[0]<<" "<<p[0]<<endl;
cout<<"10. "<<p[1]<<endl;

char *str = "how are you\n"; // warning dega error nii dega
//char const *str = "how are you\n"; // works fine

 cout << str << endl;   
 cout << *str << endl;


}
