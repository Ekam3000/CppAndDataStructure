/*• Virtual functions are used for achieving run time polymorphism
• Pure virtual functions must be overrides by derived class
 . Runtime Polymorphism is achieved using function overriding
 . Virtual functions are abstract functions of base class
 */
#include<iostream>
using namespace std;

class Car
{
public:
/*
virtual void start()
{
    cout<<"car strated"<<endl;
}

*/
 virtual void start()=0;
};
class Innova:public Car
{
public:
 void start(){
     cout<<"Innova Started"<<endl;
     }
};
class Swift:public Car
{
public:
 void start(){
     cout<<"Swift Started"<<endl;
     }
};
int main()
{
 //Car c;
 Car *p=new Innova();
 p->start();
 p=new Swift();
 p->start();
}
/* here we are achieving polymorphism as line 24 and 26 dipicting same(same statement) thing but the function calls are different becoz the objects(innov and swift ) are differnt.
*/

/*
now here comes the concept of pure virtual function->
do we need the void start() and function in the class car now? no.

why do u write the code their , is it useful? ans No.
so remove its body content
now the line virtual void start() is just written to achieve polymorphism(we want that this function should be implemented by the innova and swift class)

we want any class that inherits the car class must overrite the start function when calls by the object of derived class.
how can we make this thing compulsory -> ans by make start() a pure virtual function in the base class.
otherwise the derived classes will also becomes an abstract class.
*/