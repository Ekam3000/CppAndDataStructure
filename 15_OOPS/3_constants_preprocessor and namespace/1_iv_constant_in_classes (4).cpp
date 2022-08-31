#include<iostream>
using namespace std;

class Demo
{
    public:
    int x=10;
    int y=20;
    void display() const // by writing const u cannot change the data members in this func tion definition
    {
      //  x++; // this cant be happened
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    Demo d;
    d.display();
}