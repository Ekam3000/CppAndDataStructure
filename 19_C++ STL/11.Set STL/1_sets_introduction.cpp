#include <iostream>
#include <set>
using namespace std;
// set and unordered_set are two types.
// set are bydefault ordered. it has criteria to sort the elements by their values .. which is same for maps
// will stores only unique elements , no repeated element in sets
// implemented in bed black trees
// so most of the operation takes lodN time
// u cant update a particular element in the set. let suppose u want ot update 3(element present in set) to 13.. so for that u will first remove 3 from set and then insert 13 to it.

int main()
{
    int arr[] = {1, 3,2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    cout << "erase:" << endl;
    // two ways -> simple using  erase function
    //  s.erase(5);
    // using iterator
    auto it = s.find(5);
    s.erase(it);

    // print all the elements
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << " ";
    }
    return 0;
}