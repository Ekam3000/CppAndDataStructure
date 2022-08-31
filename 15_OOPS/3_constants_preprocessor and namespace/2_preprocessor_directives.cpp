/*
PreProcessor Directives 
• They are instructions to compiler
• They are processed before compilation
• They are used for defining symbolic constant
• They are used for defining functions
• They also support conditional definition
*/

#include <iostream>
using namespace std;
#define max(x,y) (x>y?x:y)
#define msg(x) #x //#x is used for converting x into an string
#define c cout
#ifndef PI // #idndef -> if not defined PI previously then define it now. so(#ifndef ,#endif) is just used for confirmation
 #define PI 3.1425
#endif
int main()
{
 c<<PI;
 c<<max(10,12)<<endl;
 c<<msg(hello)<<endl;
}