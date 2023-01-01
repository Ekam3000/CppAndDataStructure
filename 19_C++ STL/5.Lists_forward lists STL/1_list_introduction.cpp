/* it is useful when there is a need of insersion and deletion of data from the middle. insersion deletion at tail and head in a doubly linked list becomes easy.
push_front
pop_front
push_back
pop_back
*/
#include <iostream>
#include <list>
using namespace std;
int main()
{
    // list<int> l;
    // init
    list<int> l{1, 2, 3, 10, 8, 5};
    // different datatype
    list<string> l2{"apple", "guava", "mango", "banana"};
    l2.push_back("pineapple");

    cout << "sort:" << endl;
    l2.sort();
    // iterate over the list and print the data
    for (string s : l2)
    {
        cout << s << "-->";
    }
    cout << endl;

    cout << "reverse:" << endl;
    l2.reverse();
    for (string s : l2)
    {
        cout << s << "-->";
    }
    cout << endl;
    cout << "front element:" << endl;
    cout << l2.front() << endl;
    cout << "pop_front:" << endl;
    l2.pop_front();
    cout << "front element:" << endl;
    cout << l2.front() << endl;

    cout << "adding element to the front of the list:" << endl;
    l2.push_front("kiwi");

    cout << "back element:" << endl;
    cout << l2.back() << endl;
    cout << "pop_back:" << endl;
    l2.pop_back();
    cout << "back element:" << endl;
    cout << l2.back() << endl;

    cout << "iterate through the list using iterators:" << endl;
    
    for (auto it = l2.begin(); it != l2.end(); it++)
    {
        cout << (*it) << "->";
    }
    cout << endl;
    return 0;
}