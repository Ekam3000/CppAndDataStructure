#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
class person
{
public:
    string name;
    int age;

    person()
    {

    }
    person(string s, int a)
    {
        name =s;
        age=a;
    }
};
class PersonCompare
{
    public:
    bool operator()(person A,person B)
    {
        if(A.age<B.age)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    int n;
    cout<<"enter number of persons:"<<endl;
    priority_queue<person,vector<person>,PersonCompare> pq;
    // we have made priority_queue of person class, but now stl class does not know how to compare two persons , so in this priority_queue stl we have to pass a class for comparison instead of comparitor function.
/*what is happening here. what is the use of this PersonCompare class.
1.firstly priority_queue class makes an object of the class which we have passed internally
2. when two person will be compared the object of the class is called with the two persons like pc(p1,p2) here pc is the object nad p1,p2 are persons . then operator  overloaded function() will be called
*/

     string name;
     int  age;
    for(int i=0;i<n;i++)
    {
       cin>>name>>age;
       person p(name,age);
       pq.push(p);
    }
    // we want top 3 old person.
    int k=3;
    for(int i=0;i<k;i++)
    {
        person p=pq.top();
        cout<<p.name<<" "<<p.age<<endl;  
        pq.pop() ;
    }
    // this code is useful when we have to find something like top 3 , top constestants out of the total 100 participants. priority queue tech is best .. bcoz in this we are calling top() function in decending order one by one to get data and then poping out the top()(root data)
    // so jitna data chahiye hoga utne times function top() call hoga without disturbing the whole data.
    return 0;


}