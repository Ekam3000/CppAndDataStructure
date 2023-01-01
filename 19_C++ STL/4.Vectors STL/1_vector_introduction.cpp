#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // you can create and initialize a vector
    vector<int> a;
    vector<int> b(5, 10);              // five int with value 10 , useful for init vector of zeros (n,0)
    vector<int> c(b.begin(), b.end()); // copying elements of vector b to c.
    vector<int> d{1, 2, 3, 10, 14};
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << ",";
    }
    cout<<endl;
    for(auto it=b.begin();it!=b.end();it++)
    {
        cout<<(*it)<<",";
    }
    cout<<endl;
    // for each loop 
    for(int x:d)
    {
        cout<<x<<",";
    }
    // discuss more function
    vector<int> v;
    int n;
    cout<<"put n\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
      v.push_back(i+1);
    }
    // doubling of memory is an expensive operation. u should try to "Avoid" it. as it takes time to double the size of vector and to copy the previous small size vector elements to a new memory location with double  size.
    
    for(int x:v)
    {
        cout<<x<<" ";
    }

    // at memory level how the two vectors , v and d are different
    cout<<endl<<"for v:"<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl; // max number of elements a vector can hold in the worst case acc to the available memory in the system.
    cout<<"for d"<<endl;
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;
    cout<<d.max_size()<<endl;
    return 0;
}
/*
10,10,10,10,10,
10,10,10,10,10,
1,2,3,10,14,
put n
5
1 2 3 4 5 
for v:
5
8
1073741823
for d
5
5
1073741823
*/


/* vector passing to fuction 
function(vector<int> v)
{

}
int main()
{
vector<int> A;
function(A);
}

// vector of type pair 
vector <pair<int,int>> vec={
        {1,2},{3,4},{5,6}
    };//Initializing a vector of pairs
    
    vec.push_back(make_pair(7,8));//Adding a pair to the vector 
    cout<<"Vector contains pairs: ";
    for(int i =0;i<vec.size();i++)
    {
        cout<<"("<<vec[i].first<<","<<vec[i].second<<")"<<" ";
    }
*/