#include <iostream>
using namespace std;
int replace_char(char b[], char c1, char c2)
{
    int i = 0;
    while (b[i] != '\0')
    {
        if (b[i] == c1)
            b[i] = c2;
        i++;
    }
    cout << endl;
    cout << b;
}
int main()
{
    char b[10];
    cout << "enter a string:";
    cin >> b;
    cout << "string:" << b << endl;
    char c1, c2;
    cin >> c1;
    cout << " ";
    cin >> c2;
    replace_char(b, c1, c2);
}