#include <iostream>
using namespace std;
int main()
{
    char c;
    int count_of_characters = 0, count_of_digits = 0, count_of_whitespaces = 0;
    c = cin.get();
    while (c != '$')
    {
        if (c >= 'a' && c <= 'z')
        {
            count_of_characters++;
        }
        if (c >= '0' && c <= '9')
        {
            count_of_digits++;
        }
        else
        {
            count_of_whitespaces++;
        }
        c = cin.get();
    }
    cout << count_of_characters << "\t" << count_of_digits << "\t" << count_of_whitespaces;
}