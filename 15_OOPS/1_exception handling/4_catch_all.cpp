// catch (...) -> catch all, catch all block will be the last block .. after all defined catch blocks.
// if any catch block is not avaliable for any kind of throw data then catch(...) will be run. and if u are using catch(...) in your program then it means u are not interested in knowing the exact cause of exception. so its suggested to write a proper catch() type of data for perticular throw() data.

// nesting of catch AND TRY BLOCKS ALso possible.

// if multiple classes are used using inheritance .. then catch() for child class should come first..then catch() for the parent class. bcox if parent class catch is written first then it can also handle the child class exception so in that case child class catch() is useless .. so thats why then catch() for child class should come first.
#include<iostream>
using namespace std;

/*
int main()
{
    try
    {
        throw string("hi");
    }
    catch(int e)
    {
        cout<<"int catch:"<<endl;
    }
    catch(double e)
    {
        cout<<"double catch:"<<endl;
    }
    catch(...)
    {
        cout<<"ALL catch"<<endl;
    }

    return 0;
}
*/
class MyException1
{

};
class MyException2: public MyException1
{

};
int main()
{
    try
    {
        throw MyException1();
    }
    catch(MyException2 e)
    {
        cout<<"child class catch:"<<endl;
    }
    catch(MyException1 e)
    {
        cout<<"parent class catch:"<<endl;
    }
    catch(...)
    {
        cout<<"ALL catch"<<endl;
    }

    return 0;
}