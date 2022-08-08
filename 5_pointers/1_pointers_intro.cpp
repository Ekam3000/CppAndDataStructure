#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    cout << &i << endl;
    int *p = &i;
    cout << p << endl;
    cout << *p << endl;
    cout << sizeof(p) << endl;
    i++;
    cout << i << endl;
    cout << *p << endl;
    int a = i;
    a++;
    cout << a << endl;
    cout << *p << endl;
    i = 12;
    cout << i << endl;
    cout << *p << endl;
    *p = 123;
    cout << i << endl;
    cout << *p << endl;
    (*p)++;
    cout << i << endl;
    cout << *p << endl;
    //one pointer taking the address of int i , with help of pointer p, which initially takes the address of pointer p.
    int *q = p;
    cout << "*q "<<*q << endl;
    cout << q << endl;
    //alternative
    int x = 11;
    int *y = &x;
    y = p;
    // y now point to p, so it will give same values which q gives.
    cout << *y << endl;
    cout << y << endl;
    //important
    p=p+1;
    cout<<p<<endl;
    double s = 10.73672;
    double *pd = &s;
    cout << pd << endl;
    cout << *pd << endl;
    float r = 10.234;
    float *pf = &r;
    cout << pf << endl;
    cout << *pf << endl;
}