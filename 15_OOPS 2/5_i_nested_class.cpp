#include<iostream>
using namespace std;

class Outer
{
    public:
    int a=10;
    static int b;
    void fun()
    {
        i.show();
        cout<<i.x;
    }
    class inner
    {
     public :
     int x=25;
     void show()
     {
         cout<<"show:"<<endl;
       //  cout<<a; // this cant be accessed 
         cout<<b<<endl; //ya only static members can be accessed
     }
    };
    inner i; // the object of inner class is declared here. so we can say the outer class creates an object of inner class
};
int Outer :: b=20;
int main()
{
    Outer::inner i; // i can also create the object of inner class outside the outer class also by using the scope resolution operator . it is possible becoz the inner class is in the public section of Outer class. if it is made private then we cant create object like this
    
    return 0;
}
/*
1.the outer class creates an object of inner class (inner i), using that object it can access all the public  members of the inner class(indicated by i.show() and i.x in the void fun())
*/