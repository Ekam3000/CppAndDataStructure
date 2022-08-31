/*
constructors are used for initialising the resourses and destructor are used for deallocating the resorces and  hence destroying the object.
*/
#include<iostream>
using namespace std;
class Demo
{
    int *p;
    // in an classes where u are dynamically allocating the memory inside the constructor or anywhere in the class . then for deallocating the memory we will use delete p inside destructor.
 public:
 Demo()
 {
     p=new int[10];
     cout<<"constructor of demo:"<<endl;
 }
 ~Demo()
 {
     // for deleting the memory of dynamically created array we will call delete p in ddestructor here.
     delete []p;
     cout<<"destructor is called:"<<endl;
 }
};
void fun()
{
    Demo *d=new Demo();
    // for calling a object for dynamically object we write delete d
   delete ;

}

int main()
{
    fun();
    return 0;
}