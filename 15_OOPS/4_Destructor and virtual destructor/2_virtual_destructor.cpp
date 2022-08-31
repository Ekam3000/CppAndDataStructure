#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"base constructor"<<endl;
    }
   virtual~base()
    {
        cout<<"base destructor"<<endl;
    }
};
class derived : public base
{
    public:
    derived()
    {
        cout<<"derived constructor:"<<endl;
    }
   ~derived()
    {
        cout<<"derived destructor:"<<endl;
    }
};
int main()
{
    base *p=new derived(); // base class pointer and object of derived class.
    // in these particular cases ,in c++ the function are called according to the pointer to which class it is belonging not on the object.

    // without virtual keyword in the base class destructor function. only base class destructor will be called.

    // with virtual keyword in the base class.. destructor calling is same as in case of normal object.

    // derived d;
    delete p;
}
/*
base constructor
derived constructor:
derived destructor:
base destructor
*/