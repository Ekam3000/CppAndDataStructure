// insert(k)=v k is the key and v is its value or id.
// query(k) // to query any key. we will use find() function
// delete(*) erase() function is used.
// a map maintains a self balancing bst// i.e maps are implemented using BST.
// keys are ordered in maps(sorted in nature ).. ordering is defined by keys in map not by the value v. so time complexity here will take O(logn).
// so the maps are ordered_maps
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string, int> m;
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
    // erase function can take a iterator as well as a key value.
    cout<<"erase"<<endl;
     m.erase(fruit);
     cout<<"now the count function will return not present"<<endl;
    if (m.count(fruit))
    {
        cout << "price of " << fruit << "is" << m[fruit] << endl;
    }
    else
    {
        cout << "fruit is not present" << endl;
    }
    cout<<"to iterate over the map"<<endl;
    m["litchi"]=150;
    m["pineapple"]=200;
    for(auto it=m.begin();it!=m.end();it++)
    {
        // here the iterator points to the value(k,v) i.e to an pair object .. to fetch the value we will write (*it).first ,(*it).second
        cout<<it->first<<" and "<<it->second<<endl;
    }
    // for each loop
    for(auto a:m)
    {
         cout<<a.first<<" and "<<a.second<<endl;
    }
    return 0;
}
/*input 
banana
*/
/*
price of bananais40
30
price of bananais30
erase
now the count function will return not present
fruit is not present
to iterate over the map
apple and 120
litchi and 150
mango and 80
pineapple and 200
apple and 120
litchi and 150
mango and 80
pineapple and 200
*/