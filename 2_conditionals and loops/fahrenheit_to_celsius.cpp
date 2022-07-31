#include <iostream>
using namespace std;
int main()
{
    float S, E, W, i, C;
    cout << "start farhenheit value:";
    cin >> S;
    cout << "end farhenheit value:";
    cin >> E;
    cout << "step size:";
    cin >> W;
    i = S;
    while (i <= E)
    {
        C = (5 / 9.0) * (i - 32);
        cout << i << "\t" << C << endl;
        i = i + W;
    }
    return 0;
}
