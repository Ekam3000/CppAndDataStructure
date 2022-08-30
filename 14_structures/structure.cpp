#include <iostream>
using namespace std;

struct rectangle
{
  int length;
  int bredth;
};
int main()
{
  // rectangle r;
  rectangle r = {10, 5};
  r.length = 15;
  r.bredth = 10;
  cout << "Area of rectangle is" << r.length * r.bredth;
}