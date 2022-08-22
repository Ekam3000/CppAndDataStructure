#include <iostream>
using namespace std;
void reverse_string(char str[])
{

    int count = 0;
    int k = 0;
    while (str[k] != '\0')
    {
        count++;
        k++;
    }
    int j = count;
    j--;
    int i = 0;
    for (i; i < j; i++)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }
}
int main()
{
    char str[30];
    cout << "enter string:" << endl;
    cin.getline(str, 30);
    cout << endl;
    reverse_string(str);
    cout << endl;
    cout << str;
}