#include <iostream>
using namespace std;
int main()
{
   int index[20][20];
   int m, n;
   cout << "enter number of rows and column" << endl;
   cin >> m >> n;
   // taking input
   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
      {
         cin >> index[i][j];
      }
   }
   // print array row wise
   cout << "row wise:" << endl;
   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
      {
         cout << index[i][j];
      }
      cout << endl;
   }
   // print array column wise
   cout << "column wise:" << endl;
   for (int j = 0; j < n; j++)
   {
      for (int i = 0; i < m; i++)
      {
         cout << index[i][j];
      }
      cout << endl;
   }
}
/* example 5*2
 [0][0]  [0][1]
   3       4
 [1][0]  [1][1]
    5      6
 [2][0]  [2][1]
    7      8
 [3][0]  [3][1]
    9      10
 [4][0]  [4][1]
    11     12
 row wise it will be printed as
 [0][0]  [0][1]
   3       4
 [1][0]  [1][1]
    5      6
 [2][0]  [2][1]
    7      8
 [3][0]  [3][1]
    9      10
 [4][0]  [4][1]
    11     12
column wise it will be printed as
[0][0] [1][0] [2][0] [3][0] [4][0]
   3      5     7      9      11
[0][1] [1][1] [2][1] [3][1] [4][1]
  4      6       8     10     12 
*/