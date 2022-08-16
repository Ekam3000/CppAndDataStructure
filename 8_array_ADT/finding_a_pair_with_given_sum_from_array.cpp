#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter given sum:" << endl;
  cin >> n;
  int array[15];
  int n1;
  cout << "size of array:" << endl;
  cin >> n1;
  for (int i = 0; i < n1; i++)
  {
    cin >> array[i];
  }
  int remaining;
  cout << "the pair of elements producing a given sum are:" << endl;
  for (int i = 0; i < n1; i++)
  {
    remaining = n - array[i];
    for (int j = i + 1; j < n1; j++)
    {
      if (remaining == array[j])
      {
        cout << remaining << " " << array[i] << endl;
        break;
      }
    }
  }
}