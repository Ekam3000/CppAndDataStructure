#include <iostream>
using namespace std;
int longest_unique_substring(char *input)
{
    int start = 0;
    int next = 0;
    int lastindex[256];
    for (int i = 0; i < 256; i++)
    {
        lastindex[i] = -1;
    }
    int longestSoFar = 0;
    while (input[next] != '\0')
    {
        char nextChar = input[next];
        if (lastindex[nextChar] < start)
        {
            next++;
        }
        else
        {
            int currentOptionlength = next - start;
            if (currentOptionlength > longestSoFar)
            {
                longestSoFar = currentOptionlength;
            }
            start = lastindex[nextChar] + 1;
            next++;
        }
        lastindex[nextChar]++;
    }
    int currentOptionlength = next - start;
    if (currentOptionlength > longestSoFar)
    {
        longestSoFar = currentOptionlength;
    }
    return longestSoFar;
}

int main()
{
    char input[100];
    cin >> input;
    cout << longest_unique_substring(input) << endl;
}
// abcdabceb
// ans- dabce ans length 5
