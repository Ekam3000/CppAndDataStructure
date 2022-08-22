#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  char str[50];
  cin.getline(str, 50);
  strcat(str, " ");
  int len = strlen(str);
  int position = 0;
  for (int i = 0; i < len; i++)
  {
    if (str[i] == ' ' && str[i + 1] != ' ')
    {
      for (int j = i - 1; j >= position; j--)
      {
        cout << str[j];
      }
      cout << " ";
      position = i + 1;
    }
  }
}