#include <iostream>
using namespace std;
#include <cstring>
int main()
{
  char s[100];
  cin.getline(s, 100);
  strcat(s, " ");
  int len = strlen(s);
  int count = 0;
  int wordLength;
  char s1[100];
  int j = 0;
  int k = 0;
  for (int i = 0; i < len; i++)
  {
    count++;
    s1[j++] = s[i];
    if (s[i] == ' ' && s[i + 1] != ' ')
    {

      wordLength = count - 1;
      if (wordLength % 2 == 0 && wordLength > 4)
      {
        int r = k + (wordLength / 2);
        for (int i = (k + wordLength); i > r; i--)
        {
          s1[i] = s[i - 1];
        }
        s1[r] = ' ';
        s1[j++] = ' ';
      }
      count = 0;
      k = j;
    }
  }
  for (int i = 0; i < j; i++)
  {
    cout << s1[i];
  }
}
