/*
using namespace std
if we dont write this line then at every place in the code where cout and cin written we will use std::
*/
#include<iostream>
using namespace std;

namespace first
{
void fun()
{
cout<<"first";
}

};
namespace second
{
    void fun()
    {
cout<<"\n second";
    }

};

using namespace first;
int main()
{
    fun();
    second::fun();
    return 0;
}