// unordered maps are implement using hashtables.. all the reloading .. load factor teacniques occurs in hashtables.
// best thing -> insersion(),erase(),find() occurs in O(1) on an average.
// the elements u get in output will not be in sorted order and that is quite evident bcoz when u find hash index. u cannot predict where the element will go.
// so where the relative ordering between the key is not important. u can go with hashtable /unordered_list.
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    unordered_map<string, int> m;
    // 1.insert
    m.insert(make_pair("mango", 80));
    pair<string, int> p{"banana", 40};
    m.insert(p);
    m["apple"] = 120;

    // 2. search
    string fruit;
    cin >> fruit;
    auto it = m.find(fruit); // the  find function returns an iterator.
    if (it != m.end())
    {
        cout << "price of " << fruit << "is" << m[fruit] << endl;
    }
    else
    {
        cout << "fruit is not present" << endl;
    }
    // maps stores unique keys only once , if again the same key is initialise to a value, then its previous value will be updated.
    m["banana"] = 30;
    cout << m["banana"] << endl;
    // alter way to find a particular key is present or not.
    if (m.count(fruit)) // count will return 1 or 0
    {
        cout << "price of " << fruit << "is" << m[fruit] << endl;
    }
    else
    {
        cout << "fruit is not present" << endl;
    }
    // 3.erase
    cout << "erase" << endl;
    m.erase(fruit);
    cout << "now the count function will return not present" << endl;
    if (m.count(fruit))
    {
        cout << "price of " << fruit << "is" << m[fruit] << endl;
    }
    else
    {
        cout << "fruit is not present" << endl;
    }
    cout << "to iterate over the map" << endl;
    m["litchi"] = 150;
    m["pineapple"] = 200;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        // here the iterator points to the value(k,v) i.e to an pair object .. to fetch the value we will write (*it).first ,(*it).second
        cout << it->first << " and " << it->second << endl;
    }
    // for each loop
    for (auto a : m)
    {
        cout << a.first << " and " << a.second << endl;
    }
    return 0;
}
/*
banana
price of bananais40
30
price of bananais30
erase
now the count function will return not present 
fruit is not present
to iterate over the map
pineapple and 200
litchi and 150
apple and 120
mango and 80
pineapple and 200
litchi and 150
apple and 120
mango and 80
*/