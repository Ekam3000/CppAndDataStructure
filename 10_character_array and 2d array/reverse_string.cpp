#include <iostream>
using namespace std;
void reverse_string(char str[], char str1[])
{
    int i = 0;
    int count = 0;
    int k = 0;
    while (str[k] != '\0')
    {
        count++;
        k++;
    }
    int j = count;
    j--;
    for (i; i < count; i++)
    {
        str1[j--] = str[i];
    }
}
int main()
{
    char str[10];
    char str1[10];
    cout << "enter string:" << endl;
    cin >> str;
    cout << endl;
    reverse_string(str, str1);
    cout << endl;
    cout << str1;
}