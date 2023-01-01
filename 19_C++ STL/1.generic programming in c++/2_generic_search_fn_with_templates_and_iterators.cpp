// templates +iterators

#include <iostream>
#include <list>
using namespace std;

// for a function if we want to pass two different kinds of data then represented as
// template<class A, class B>
template <class ForwardIterator, class T> // ForwardIterator , T are just names .. u can also name them X,Y or something else
// class ForwardIterator -> depends upon what kind of container we are using.
// class T -> depends upon what kind of data we are using.ye T ab koi bhi data type bn sakti hai , koi bhi class bn sakti hai.

ForwardIterator search(ForwardIterator start, ForwardIterator end, T key)
{  //start,end,keyare objects of ForwardIterator,T classes
    // this ForwardIterator works on different containers like vectors, list or other sequence containers.
    while (start != end)
    {
        if (*start == key)
        {
            return start;
        }
        start++;
    }
    return end;
}
// so this above code is a kind os code that contained in an stl for searching.
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    // search(l.begin(),n,k)<<endl;
    //  l.begin() is an iterator whose data type is list<int>
    // list<int> :: iterator == auto
    auto it = search(l.begin(), l.end(), 6); //l.begin()n points to the location that is just after the last location of the vector.
    if (it == l.end())
    {
        cout << "element not present";
    }
    else
    {
        cout << *it;
    }
}