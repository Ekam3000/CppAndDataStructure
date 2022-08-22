#include <iostream>
using namespace std;
#include <cstring>
// abcd
//->a  0,0
//->ab 0,1 (0 se 1 index takk jana hai)
//->abc 0,2
//->abcd 0,3
//->b 1,1
//->bc 1,2
//->bcd 1,3
// etc etc..
void print_all_prifixes(char input[])
{
    // i represents end index of my prefix

    for (int i = 0; input[i] != '\0'; i++)
    {
        for (int k = i; input[k] != '\0'; k++)
        {
            for (int j = i; j <= k; j++)
            {
                cout << input[j];
            }
            cout << endl;
        }
    }
}
int main()
{
    char input[20];
    cin >> input;
    cout << endl;
    print_all_prifixes(input);
}