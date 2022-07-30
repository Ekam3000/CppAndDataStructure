#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    float av;
    cin>>a>>b>>c;
    cout<<"\n";
    av=(a+b+c)/3.0;
    cout<<"1->"<<av;
    cout<<"\n";
    av=float(a+b+c)/3;
    cout<<"2->"<<av;
    cout<<"\n";
    av=(a+b+c)/3;
    cout<<"3->"<<av;
    return 0;
}
/*
5 6 2
1->4.33333
2->4.33333
3->4
*/