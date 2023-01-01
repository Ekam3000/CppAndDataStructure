/* to store phone numbers of a person
Rahul: 9814....., 9646.....,8762...
X:______,_______,_______
y:_______,______,_______
*/
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main()
{
    unordered_map<string,vector<string>> phonebook;
    phonebook["rahul"].push_back("9110");
    phonebook["rahul"].push_back("9112");
    phonebook["rahul"].push_back("9113");
    phonebook["rahul"].push_back("9114");
    phonebook["kajal"].push_back("8112");
    phonebook["kajal"].push_back("8113");
    phonebook["kajal"].push_back("8114");
    for(auto p:phonebook)
    {
        cout<<"Name"<<p.first<<" ->";
        for(string s:p.second)
        {
            cout<<s<<",";
        }
    }
    // the output is  unordered , since it is an onordered map.. so the order can be random order u cannot the decide what order u will get.
  
   // phonebook[name] is going to give u a vector.
   string name;
   cin>>name;
   if(phonebook.count(name)==0)
   {
       cout<<"absent ";
   }
   else{
       for(string s:phonebook[name])
       {
           cout<<s<<",";
       }
   }

    return 0;
}