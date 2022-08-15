#include<iostream>
using namespace std;
int main(){
char b[100];
cout<<"enter string:";
// cin dont read space,tab,new line .
//cin>>b;
//cin.getline(b,100);
cin.getline(b,4); // this will take only three characters from the user.
cout<<"string:"<<b<<endl;
char c[] ="abcdfr";
cout<<c<<endl;
char d[100] ="abcdfr";
cout<<d<<endl;
char e[] ="abcdfrdcdd";
cout<<e<<endl;
}