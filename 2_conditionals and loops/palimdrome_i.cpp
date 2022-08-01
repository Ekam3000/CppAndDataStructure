#include <iostream>
using namespace std;
// Function to check palindrome
int checkPalindrome(char str[])
{
    // Calculating string length
    int count = 0;
    int k = 0;
    while (str[k] != '\0')
    {
        count++;
        k++;
    }
    // Traversing through the string
    // upto hlaf its length
    for (int i = 0; i < count / 2; i++)
    {
        // Comparing ith character
        // from starting and len-i
        // th character from end
        if (str[i] != str[count - i - 1])
            return false;
    }
    // If the above loop doesn't return then it is
    // palindrome
    return true;
}
// Driver Code
int main()
{ // taking number as string
    char str[10];
    cout << "enter string:" << endl;
    cin >> str;
    cout << endl;
    if (checkPalindrome(str) == true)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}