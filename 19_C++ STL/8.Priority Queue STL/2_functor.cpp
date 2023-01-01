#include<iostream>
using namespace std;
class Fun{
    public:
    void operator()( string s )
    {
        cout<<"Having Fun inside operator() fn!"<<endl;
        cout<<"having function with c++"<<endl;

    }
};
int main()
{
    Fun f; // constructor
   // f(); // Overloaded () operator = function call where f is an object.
   // this object f is called functor. it calls the function. it is called functional object in c++.
    f("c++");
}