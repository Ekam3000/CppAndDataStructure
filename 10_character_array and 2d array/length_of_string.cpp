#include <iostream>
using namespace std;
int length(char b[])
{
    int count = 0;
    int i = 0;
    while (b[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}
int main()
{
    char b[10];
    cout << "enter your name:";
    cin >> b;
    cout << "name:" << b << endl;
    cout << "length of string:" << endl;
    int count = length(b);
    cout << count;
}