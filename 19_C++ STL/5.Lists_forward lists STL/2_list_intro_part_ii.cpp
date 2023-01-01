#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<string> l2{"apple","guava","mango","banana"};
    l2.push_back("pineapple");
    l2.push_back("guava");
    for (string s : l2)
    {
        cout<<s<<"-->";
    }
    cout << endl;
    cout << "revome a fruit:";
    string f;
    cin>>f;
    l2.remove(f);
    // or u can directly write the name of the fruit without cin l2.fruit("mango")
    for (string s : l2)
    {
        cout << s << "-->";
    }
    cout << endl;
    cout<<"erasing one or more element at a perticular index with reference to beginning: "<<endl;
    // here the direct access does not work with list. which exists in vectors, arrays. bcoz these are linear data.
    // apple->mango->guava 
    //to access guava l2[2] direct access does not exits.

    // so incrementation of iterator occurs 
    cout<<"to remove 3rd element:";
    auto it =l2.begin();
    it++;
    it++;
    l2.erase(it);
     for (string s : l2)
    {
        cout << s << "-->";
    }
    cout << endl;

    cout<<"inserting element in the list:"<<endl;
    it=l2.begin();
    it++;
    l2.insert(it,"fruitjuice");
    for (string s : l2)
    {
        cout << s << "-->";
    }
    cout << endl;
    return 0;
}