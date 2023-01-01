#include <iostream>
#include <map>
#include <cstring>
using namespace std;
// there is no uniqueness in the key,we are able to insert multiple keys with the same name
// soted in assending order in accordance with the key
int main()
{
    multimap<char,string> m;
    char ch;
    string s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ch >> s;
        m.insert(make_pair(ch, s));
    }
    for (auto p : m)
    {
        cout << p.first << " and " << p.second << endl;
    }
    cout << "erase:" << endl;
    // erase function me iterator bhi ja sakta 
    auto it = m.begin();
    m.erase(it);
    for (auto p : m)
    {
        cout << p.first << " and " << p.second << endl;
    }
    auto it2 = m.lower_bound('b');
    auto it3 = m.upper_bound('d');
    for (auto it4 = it2; it4 != it3; it4++)
    {
        cout << it4->first << "->" << it4->second << " ";
    }
    cout << "find" << endl;
    auto f = m.find('c');
    if (f->second == "cat")
    {
        m.erase(f);
    }
    for (auto p : m)
    {
        cout << p.first << " and " << p.second << endl;
    }
}
// to detect cycle present in an linked list, maps<node*,bool> can be used to store the addresses of nodes.
/*
7
b batman
a apple
b boat
a angry
e eleplant
c cat
d dog
*/

/*
a and apple
a and angry
b and batman
b and boat
c and cat
d and dog
e and eleplant
erase:
a and angry
b and batman
b and boat
c and cat
d and dog
e and eleplant
b->batman b->boat c->cat d->dog find
a and angry
b and batman
b and boat
d and dog
e and eleplant
*/