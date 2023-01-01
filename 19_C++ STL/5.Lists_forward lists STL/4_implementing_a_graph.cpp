// adjancy list, implementation of a graph.
// we will make array of list.
#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<pair<int,int>> *l;
    // n number of vertices.
    int n;
    cin>>n;
   l= new list<pair<int,int>> [n]; // we have make array of linked list.

   int e; // the number of edges.
   cin>>e;
   for(int i=0;i<e;i++)
   {
       int x,y,wt;
       cin>>x>>y>>wt;
       //x,y representing a  particular vertex of the array of linked list .. this value is inbetween 0 to n.
       //wt --> the distance between the vertices.
     
     l[x].push_back(make_pair(y,wt));
       
       // we will also make a reverse edge here.
       l[y].push_back(make_pair(x,wt));
   }
   for(int i=0;i<n;i++)
   {
       cout<<"linked list of "<<i<<"th element -->";
   for(auto xp:l[i]) // l[i] contains more than one pair .
   { 
       cout<<"("<<xp.first<<","<<xp.second<<")";
   }
   cout<<endl;
   }

    return 0;
}
/*
3 6
0 1 2
0 2 3
1 0 4
1 2 5
2 0 9
2 1 7
*/