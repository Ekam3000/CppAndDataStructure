/*c3=c2+c1
in operator overloading the object c2 is adding c1 to itseft or reverse may also happen,
in friend operator overloading both c1, and c2 will be given as pamameter to a friend , and that friend will add c1 and c2 both.
*/

#include<iostream>
using namespace std;
class Complex
{
private:
int real,imag;
public:
Complex()
{

}
Complex(int x,int y)
{
    real =x;
    imag=y;
}
friend Complex  operator+(Complex &c1,Complex &c2);
friend void display(Complex c);
};
Complex operator +(Complex &c1,Complex &c2)
{
    Complex t;
    t.real= c1.real +c2.real;
    t.imag= c1.imag +c2.imag;
    return t;
}
void display(Complex c)
{
    cout<<c.real<<" "<<c.imag;
}
int main()
{
    Complex c1(3,7);
    Complex c2(5,4);
    Complex c3;
    c3=c2+c1;
    display(c3);

    return 0;
}