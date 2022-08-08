#include <iostream>
using namespace std;
// pointer me bhi pass by value hota hai
void print(int *p)
{
    cout << *p << endl;
}
void incrementPointer(int *p)
{
// changes(address in this case) in the pointer inside the function will not affect its changes in main function pointer
     p = p + 1;
}
// ab hum address par jaa kar value change kar rahe hai to change dono jagah reflect hoga
void increment(int *p)
{
    (*p)++;
}
void square(int *p){
int a=10;
p=&a;
*p=(*p)*(*p);
}
int main()
{
    int a = 10;
    int *p = &a;
    print(p);
    //or
    //print(&a);
    cout << p << endl;
    incrementPointer(p);
    cout << p << endl;
    cout << *p << endl;
    increment(p);
    cout << *p << endl;
    cout<<a<<endl;
    square(&a);
    cout << *p << endl;
}
/*
10
0x61ff08
0x61ff08
10
11
11
11
*/