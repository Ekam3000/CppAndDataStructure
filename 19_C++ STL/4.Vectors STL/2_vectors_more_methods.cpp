#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> d{1, 2, 3, 4, 5};
    // 1. push back O(1) for mosty of tyhe time, rarely it is greater then O(1) when there is case of expension of memory.
    d.push_back(16);
    // pop back,removes the last element O(1).
    d.pop_back();
    for (int x : d)
    {
        cout << x << ",";
    }
    cout << endl;
    // insert some elements in the middle
    cout << "Insert:" << endl;
    d.insert(d.begin() + 3, 4, 100); // inserting 4 elements 100 after index 3
    d.insert(d.begin() + 3, 50);     // inserting one 100 after index 3
    for (int x : d)
    {
        cout << x << ",";
    }
    cout << endl;
    cout << "size:" << endl;
    cout << d.size() << endl;
    cout << "erase:" << endl;
    d.erase(d.begin() + 2);
    for (int x : d)
    {
        cout << x << ",";
    }
    cout << endl;
    d.erase(d.begin() + 2, d.begin() + 6);
    for (int x : d)
    {
        cout << x << ",";
    }
    cout << endl;

    cout << "size:" << endl;
    cout << d.size() << endl;
    cout << d.capacity() << endl;
    // the available size of the vector is 10 .. given by d.capacity().
    // vectors do not shrink, to make the implimentation efficient we avoid the shrink operation.
    // the current capacity of vector is 10.
    d.resize(8); // we want to reduce the length/size of the vector to 8 from 10.  but this not happen. the size maybe become 8 by putting remaining 0's upto index 8 .. but the underlying capacity will remain same 10.
    for (int x : d)
    {
        cout << x << ",";
    }
    cout << endl;
    // if we want to expand the size of vector greater than 10 ,then this is possible. the capacity will also becomes 18 and the vectors will be filled with zeroes upto index 18
    d.resize(18);
    cout << d.capacity() << endl;
    for (int x : d)
    {
        cout << x << ",";
    }
    cout << endl;
    // erase all the elements of the  vector. this will make size as 0 . but the capacity will be 18 as it is.
    d.clear();
    cout << d.size() << endl;
    cout << d.capacity() << endl;
    for (int x : d)
    {
        cout << x << ",";
    } // will be empty
    cout << endl;
    cout << "empty" << endl;
    if (d.empty())
    {
        cout << "this vector is empty:" << endl;
    }
    // front and back element
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    cout << "front" << d.front() << endl;
    cout << "back" << d.back() << endl;
    // to avoid doubling we use reserve function. u will create a vector of fixed size say 100(or largest possible integer upto which u  know your no. of elements will get exceeded), and until the vector is not got up filled with 100 elements its capacity will not get get double.
    cout << "reserve function:" << endl;
    d.reserve(1000);
    cout << d.capacity() << endl;
    return 0;
}