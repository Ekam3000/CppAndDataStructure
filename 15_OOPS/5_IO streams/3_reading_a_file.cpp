#include<iostream>
#include<fstream>
using namespace std;
// flags->
//ios::in -> for reading
//ios::out -> for writing
// ifstream is itself for reading

int main()
{
    ifstream infile;
    infile.open("my.txt");
   // if(!infile)
   //or
   if(!infile.is_open())
   {
       cout<<"file cannot be opened"<<endl;  
   }
   string str;
   int x;
   infile>>str;
   infile>>x;
   cout<<str<<" "<<x;
   if(infile.eof())
   cout<<"end of file reached";
   infile.close();
    return 0;
}