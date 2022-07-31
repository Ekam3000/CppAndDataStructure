#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter a and b";
    cin >> a >> b;
    int rand = a & b;
    int ror = a | b;
    int rnot = ~a;
    int rxor = a ^ b;
    int rrs = b >> 3;
    int rls = a << 3;
    cout << rand << endl
         << ror << endl
         << rnot << endl
         << rxor << endl
         << rrs << endl
         << rls << endl;
    return 0;
}
