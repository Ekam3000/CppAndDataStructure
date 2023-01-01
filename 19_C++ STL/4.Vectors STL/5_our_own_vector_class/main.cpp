#include<iostream>
using namespace std;
#include "vector.h"

int main()
{
    Vector v;
    v.push_back(1);
    cout<<"a";
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.pop_back();
    v.push_back(5);
    v.push_back(10);
    cout<<"Capacity: "<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}