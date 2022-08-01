#include <iostream>
using namespace std;
int main()
{

  int n, a = 0, b = 1, c;
  cout << "enter number:";
  cin >> n;
  while (a < n)
  {
    c = a + b;
    a = b;
    b = c;
  }
  if (a == n)
  {
    cout << "the given number is a member of fibonacci series:";
  }
  else
    cout << "the given number is not a member of fibonacci series:";
}