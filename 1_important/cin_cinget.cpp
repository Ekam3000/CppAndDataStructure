/* #include <iostream>
 using namespace std;
 int main()
 {
     char c;
     cin >> c;
     int count = 0;
     while (c != '$')
     {
         count++;
         cin >> c;
     }
     cout << "number of characters:" << count;
 }
*/
// the difference between cin and cin.get
// is that , cin.get reads space,tab and enter character as well but cin does not count that
#include <iostream>
 using namespace std;
 int main()
 {
     char c;
     c=cin.get();
     int count = 0;
     while (c != '$')
    {
         count++;
         c=cin.get();
     }
     cout << "number of characters:" << count;
 }