#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
// sort the cars coordinates according to the distance they are from origin in accending order, if the distance is same then are sorted by car name
class car
{
    public:
    string car_name;
    pair<int, int> n;
    car()
    {
    }
    car(string s, int a, int b)
    {
        car_name = s;
        n.first = a;
        n.second = b;
    }

    int dist()
    {
        // return  square of distance.
        return n.first*n.first + n.second*n.second;
    }

};
bool compare(car a, car b)
{
    if(a.dist()==b.dist())
    {
       return  a.car_name<b.car_name; // lexiographic comparison
    }
 return a.dist()<b.dist();
}
int main()
{
    // for a defined number of cars .. say 4 .. u can do like this.
    /*  car a("audi",0,1);
      car b("swift",1,0);
      car c("indica",1,2);
      car d("verna",2,2);
      vector<car> a;
      a.push_back(a);
      a.push_back(b);
      a.push_back(c);
      a.push_back(d);
     */
    // for any number of n;
    int n;
    cin >> n;
    vector<car> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        string s;
        cin >> s >> x >> y;
        car temp(s,x,y);
        v.push_back(temp);
    }
   sort( v.begin(),v.end(),compare);
   for(auto c:v)
    {
        cout<<"car "<<c.car_name<<" dist "<<c.dist()<<" location "<<c.n.first<<","<<c.n.second<<endl;
    }
    return 0;
}
/*
audi 1 2
swift 2 2
verna 0 1
indica 0 1
*/