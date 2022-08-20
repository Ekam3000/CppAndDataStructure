#include <iostream>
using namespace std;
int main()
{
  // dynamically
  string *sp = new string;
  *sp = "def";
  cout <<"1 "<< sp << endl; 
  cout <<"2 "<<*sp << endl;
  string s1;
  s1 = "def";
  cout <<"3 "<<s1 << endl;
  string s;
  cin >> s;
  cout <<"4 "<<s << endl;
  // using getline();
  // getline(cin,s);
  // cout<<s<<endl;
  s = "ghet";
  cout <<"5 "<<s[0] << endl;
  s[0] = 'a';
  cout <<"6 "<<s[0] << endl;
  string s2 = s + s1;
  cout <<"7 "<<s2 << endl;
  s += s1;
  cout <<"8 "<<s << endl;
  // size
  cout <<"9 "<<s.size() << endl;
  cout <<"10 "<<s.length() << endl;
  cout <<"11 "<<s.substr(3) << endl;
  cout <<"12 "<<s.substr(3, 4) << endl;
  cout <<"13 "<<s.find("def") << endl;
  string s3 = "abcdef";
  // string comparison
  if (s > s3)
  {
    cout <<"14 "<<s << endl;
  }
  // important concept--
  string x;
  int j = 0;
  for (int i = 0; i < s.size(); i++)
  {
    x[j++] = s[i];
  }
  cout <<"15 "<<x<< endl;
  // so the string will not get printed if done in this way
  string op(1,'a');
  cout<<op[0]<<endl;
  string op1(1,'a');
  cout<<op1<<endl;
  string op2(4,'a');
  cout<<op2<<endl;
}
// input.empty() to check if the string is empty or not.