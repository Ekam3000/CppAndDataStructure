// pair is container which helps us to bind two values as a single entity.
#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main()
{
    pair<int,char> p;
    p.first =10;
    p.second='B';
    cout<<p.first<<"\n";
    cout<<p.second<<"\n";

    // another way.
    pair<int,char>p2(p);
    cout<<p2.first<<"\n";
    cout<<p2.second<<"\n";

    pair<int,string>p3=make_pair(100,"Audi");
    cout<<p3.first<<" "<<p3.second<<endl;
    int a, b;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    
    pair<int,int>p4=make_pair(a,b);
    //you can make array of pairs, vectors of pairs.
    vector<pair<int,int>> A(5);
    cout<<"enter vector of pairs for 5 elements:\n";
    for(int i=0; i<5;i++)
    {
       cin>>A[i].first>>A[i].second;
    }
    pair<pair<int,int>,string> car;
    car.first.first =10;
    car.first.second=20;
    car.second="Audi";
    // like we want to create , a same Audi brand with two diffrent car.id 10 and 20.
     cout<<car.first.first;
     cout<<car.first.second;

  // multiple data type staorage 
   typedef pair< string, pair< int, pair< double, int * > > > myDataType;
}