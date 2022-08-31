#include <iostream>
using namespace std;
class MyException : exception //  exception is an inbuilt class in c++ we have used inheritance here.
{

};
int division(int a,int b) throw (MyException) // here the divition function will tell us the the function will going to return a class if erroe happen..similarly here we can write throw(int) throw(string) accordingly
{
 if(b==0)
 throw MyException(); // i am throwing the constructor.
  return a/b;
}
int main()
{
 int x=10,y=0,z;

 try
 {
 z=division(x,y);
 cout<<z<<endl;
 }
 catch(MyException e)
 {
 cout<<"Division by zero "<<endl;
 }
 cout<<"Bye"<<endl;
 }