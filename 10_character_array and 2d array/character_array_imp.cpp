#include <iostream>
using namespace std;
int main()
{
    char b[10];
    cout << "enter your name:";
    cin >> b;
    b[5] = 'a';
    b[4] = 'b';
    b[2] = '\0';
    cout << "name:" << b << endl;
    char buf[10] = "a";
    cout << buf << endl;
    char buf1[10] = "  a";
    cout << buf1 << endl;
}
