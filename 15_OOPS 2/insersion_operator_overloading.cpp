/*#include<iostream>
using namespace std;
// standard method using return type ostream &
class Complex
{
    private:
    int real;
    int imag;
    public:
    Complex(int x,int y)
{
    real =x;
    imag=y;
}
// after displaying in friend function we want to return out this cout,so that it can be used again in the same line in the main function , so operator << return type is ostream.
// i have to pass two objects ostream object(cout) and Complex class object(c1) , so this is the method in c++ that this insersion operator takes two parameters with it.
// as this operator takes two parameter from two differnt type of objects.so this connot belong to Complex class , so i have to write friend keyword.
// as it is a friend function so it cannot be impliment it inside the class

    friend ostream & operator<<(ostream &os,Complex &c1);
};
 ostream & operator<<(ostream &os,Complex &c1)
    {
        os<<c1.real<<"+i"<<c1.imag;
        return os;
    }
int main()
{
    Complex c1(3,7);
    cout<<c1;
   // or
   //operator(cout,c);
    return 0;
}
*/
// the same question can also be done by using void return type

#include<iostream>
using namespace std;
class Complex
{
    private:
    int real;
    int imag;
    public:
    Complex(int x,int y)
{
    real =x;
    imag=y;
}
    friend void operator<<(ostream &os,Complex &c1);
};
 void operator<<(ostream &os,Complex &c1)
    {
        os<<c1.real<<"+i"<<c1.imag;
    }
int main()
{
    Complex c1(3,7);
    cout<<c1;
   // or
   //operator(cout,c);
    return 0;
}

// so whats the difference between these two return type .. the same question can also be done using void return type?
//ans->
/*if our return is void and in main function we write 
cout<<c1<<endl;
this will give erroe msg that reference to overloaded function could not be resolved
cout<<c1<<c2<<c3;
this is also an error.

now if the return type is ostream then it will returning back again an ostream object (just like cout) so in cout<<c<<endl
, cout<<c becomes again an cout and hence becomes cout<<endl;
*/