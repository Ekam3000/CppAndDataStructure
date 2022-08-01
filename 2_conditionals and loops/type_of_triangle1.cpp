#include <iostream>
#include<math.h>
using namespace std;
 
// triangle with the help of sides
//c^2=a^2+b^2-2*a*bcosY;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int sqa = pow(a, 2);
    int sqb = pow(b, 2);
    int sqc = pow(c, 2);
     
    if (sqa == sqb + sqc ||
        sqb == sqc + sqa ||
        sqc == sqa + sqb){
        cout << "Right-angled Triangle";
    }
    else if(sqa > sqc + sqb ||
            sqb > sqa + sqc ||
            sqc > sqa + sqb){
        cout << "Obtuse-angled Triangle";
    }
    else{
        cout << "Acute-angled Triangle";
    }
}