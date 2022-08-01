#include <iostream>
using namespace std;
bool reverse_string(char str[], char str1[])
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

    cout << str1;
    int n = 0;
    int m = 0;
    for (n; n < count; n++)
    {
        if (str1[n] != str[m++])
            return false;
    }
    return true;
}
int main()
{
    char str[10];
    char str1[10];
    cout << "enter string:" << endl;
    cin >> str;
    cout << endl;
    bool check = reverse_string(str, str1);
    cout << check;
}