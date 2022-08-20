#include <iostream>
using namespace std;
#include <string.h>
int main()
{
  char s[100];
  cin.getline(s, 100);
  strcat(s, " ");
  int len = strlen(s);
  // we are supposing the minimum word can be of 100 letters
  int min = 20;
  char s1[30];
  char s2[30];
  // assuming s3 to be the shortest string word as follows-
  char s3[] = "abunanxkaabzjaijsoxmkax";
  int j = 0;
  for (int i = 0; i < len; i++)
  {
    if (s[i] != ' ')
    {
      s1[j++] = s[i];
    }
    if (s[i] == ' ' && s[i + 1] != ' ')
    {
      s1[j] = '\0';
      if (min > j)
      {
        min = j;
      }
      for (int i = 0; i <= j; i++)
      {
        s2[i] = s1[i];
      }
      s2[j] = '\0';
      if (strlen(s3) > strlen(s2))
      {
        for (int i = 0; i <= j; i++)
        {
          s3[i] = s2[i];
        }
        s3[j] = '\0';
      }
      j = 0;
    }
  }
  cout << "minimum string length of a word:" << min << endl;
  cout << "minimum length word :" << s3;
}
