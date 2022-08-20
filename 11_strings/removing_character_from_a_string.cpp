#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int len= s.size();
    char c;
    cout<<"enter particular character:";
    cin>>c;
    int j=0;
    for(int i=0;i<len;i++){
        if(c!=s[i]){
            s[j++]=s[i];
        }
    }
      for(int i=0;i<j;i++){
          cout<<s[i];
      }
}

/*aaabbbddhsg
enter particular character:a
bbbddhsg
*/