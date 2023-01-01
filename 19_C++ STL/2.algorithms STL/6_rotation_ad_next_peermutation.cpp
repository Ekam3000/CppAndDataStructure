#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    rotate(arr, arr + 2, arr + n); 
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // 30 40 50 10 20 
    }
    cout << endl;
    // apply the same to vectors
    vector<int> v={10, 20, 30, 40, 50};
    rotate(v.begin(), v.begin() + 3, v.end());
    for (int i = 0; i < v.size(); i++)
    { 
        cout << v[i] << " "; // 40 50 10 20 30
    }
    cout << endl;
    // next permutation-->gives a number which is just next greater than the given array set , or vector set.
    vector<int> v1{1, 2, 3};
    next_permutation(v1.begin(), v1.end());
    for (int x : v1) // a number x generated from v1 digits numbers . which is greater then v1
    // v1 is 1 2 3 , so next permutation of v1 which is greater than 1 2 3 is 1 3 2
    {
        cout << x << " ";
    }
    cout << endl;
    next_permutation(v1.begin(), v1.end());
    next_permutation(v1.begin(), v1.end());
    // two steps ki premutation ho gyi. (line 31 and 32 ) 1 3 2->2 1 3->2 3 1
    for (int x : v1)
    {
        cout << x << " ";
    }
    cout << endl;
    // similarly u can apply for array also
    // hamare pass new array (arr) after rotation ye hai 30 40 50 10 20
    next_permutation(arr, arr + n);
    // for each loop
    for (int x : arr) // x integer arr ki single single digit leta jata hao and use print karta jata hai.
    {
        cout << x << " ";
    }
    cout<<endl;
    // the for loop can also be applied in this way
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}