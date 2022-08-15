#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    int n3;
    cin >> n1;
    cout << endl;
    cin >> n2;
    if (n1 > n2)
    {
        n3 = n1 + 1;
    }
    else
        n3 = n2 + 1;
    int array1[10], array2[10], array3[10];
    for (int i = 1; i < n1; i++)
    {
        cin >> array1[i];
    }
    for (int i = 1; i < n2; i++)
    {
        cin >> array2[i];
    }
    int i = n1;
    int j = n2;
    int carry = 0;
    int num;
    n3 = n3 - 1;
    if (n1 > n2)
    {
        for (i, j; j >= 0; j--, i--)
        {
            num = array1[i] + array2[j] + carry;
            array3[n3--] = num % 10;
            carry = num / 10;
        }
        for (i; i >= 0; i--)
        {
            num = array1[i] + carry;
            array3[n3--] = num % 10;
            carry = num / 10;
        }
        array3[0] = carry;
    }

    if (n2 > n1)
    {
        for (i, j; i >= 0; j--, i--)
        {
            num = array1[i] + array2[j] + carry;
            array3[n3--] = num % 10;
            carry = num / 10;
        }
        for (j; j >= 0; j--)
        {
            num = array2[j] + carry;
            array3[n3--] = num % 10;
            carry = num / 10;
        }
        array3[0] = carry;
    }
    cout << "the sum of 2 array is:";
    for (int i = 0; i < n3; i++)
    {
        cout << array3[i] << "\t";
    }
}