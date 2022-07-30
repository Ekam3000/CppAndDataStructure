#include<iostream>
using namespace std;
int main(){
char c;
cout<<"enter an character:"<<endl;
cin>>c;
if(c>='a' &&c<='z'){
    cout<<"character is an lowercase alphabet";
}
else if(c>='A'&& c<='Z'){
      cout<<"character is an upper case alphabet";
}
else{
        cout<<"character is not an alphabet";
}
return 0;
}