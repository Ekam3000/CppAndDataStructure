/*
#include <iostream>
using namespace std;

int main()
{
    int a = 10, b, c;
    cout << "enter divisor:";
    cin >> b;
    try
    {
        if (b == 0)
        {
            throw 101;
        }
        c = a / b;
        cout << c;
    }
    catch (int e)
    {
        cout << "division by zero."
             << "erroe code" << e << '\n';
    }
    cout << "bye." << endl;
    return 0;
}
*/

// Throw and Catch Between function->


#include <iostream>
using namespace std;
int division(int a,int b)
{
 if(b==0)
 throw 1; // throwing an exception not returning an value.
 /* extra->
 throw 1.5; it is a double data type number. the type of catch should be div
 throw 1.5f; now it becomes float datatype number by putting an f. the type of catch should be float.
 throw string("Div by 0"); //the type of catch should be string
 */
 return a/b;
}
int main()
{
 int x=10,y=2,z;

 try
 {
 z=division(x,y);
 cout<<z<<endl;
 }
 catch(int e)
 {
 cout<<"Division by zero "<<e<<endl;
 }
 cout<<"Bye"<<endl;
 }
*/