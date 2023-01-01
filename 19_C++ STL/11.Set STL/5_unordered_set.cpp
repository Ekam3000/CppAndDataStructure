/*The Unordered_set allows only unique keys, for duplicate keys unordered_multiset should be used. */
/*Set is an ordered sequence of unique keys whereas unordered_set is a set in which key can be stored in any order, so unordered. Set is implemented as a balanced tree structure that is why it is possible to maintain order between the elements (by specific tree traversal). The time complexity of set operations is O(log n) while for unordered_set, it is O(1).
*/
// C++ program to demonstrate various function of unordered_set
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    // declaring set for storing string data-type
    unordered_set <string> stringSet ;
    // inserting various string, same string will be stored
    // once in set
    stringSet.insert("code") ;
    stringSet.insert("in") ;
    stringSet.insert("c++") ;
    stringSet.insert("is") ;
    stringSet.insert("fast") ;
  
    string key = "slow" ;
  
    //  find returns end iterator if key is not found,
    //  else it returns iterator to that key
    if (stringSet.find(key) == stringSet.end())
        cout << key << " not found" << endl << endl ;
    else
        cout << "Found " << key << endl << endl ;
    key = "c++";
    if (stringSet.find(key) == stringSet.end())
        cout << key << " not found\n" ;
    else
        cout << "Found " << key << endl ;
  
    // now iterating over whole set and printing its
    // content
    cout << "\nAll elements: ";
    unordered_set<string> :: iterator itr;
    for (itr = stringSet.begin(); itr != stringSet.end(); itr++)
        cout << (*itr) << endl;
}
/*
output
slow not found

Found c++

All elements : 
is
fast
c++
in
code
*/
