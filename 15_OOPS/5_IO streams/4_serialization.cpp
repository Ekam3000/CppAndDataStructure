/*Serialization
• Serialization is a process of storing and retrieving state of an object
• Class must have a default constructor
*/
#include <iostream>
#include <fstream>
using namespace std;
class Student
{
private:
    string name;
    int roll;
    string branch;

public:
    Student() {}
    Student(string n, int r, string b)
    {
        name = n;
        roll = r;
        branch = b;
    }
    // when we want to override insersion(<< is used for output) or extraction operator(>> is used for input) then u must make them as friend function.
    friend ofstream &operator<<(ofstream &ofs, Student s);
    friend ifstream &operator>>(ifstream &ifs, Student &s);
    friend ostream &operator<<(ostream &os, Student &s);
};
ofstream &operator<<(ofstream &ofs, Student s)
{
    ofs << s.name << endl;
    ofs << s.roll << endl;
    ofs << s.branch << endl;
    return ofs;
}
ifstream &operator>>(ifstream &ifs, Student &s)
{
    ifs >> s.name;
    ifs >> s.roll;
    ifs >> s.branch;
    return ifs;
}
ostream &operator<<(ostream &os, Student &s)
{
    os << "Name " << s.name << endl;
    os << "Roll " << s.roll << endl;
    os << "Branch " << s.branch << endl;
    return os;
}
int main()
{
    Student s1("John", 10, "CS");
    ofstream ofs("Test.txt");
    ofs << s1; // storing object in the file.writing in to a file
    ofs.close();
    Student s2;
    ifstream ifs("Test.txt");
    ifs >> s1;
    cout << s1;
    ifs.close();
}

/*
#include<iostream>
#include<fstream>
using namespace std;
class Item
{
private:
 string name;
 float price;
 int qty;
public:
 Item(){}
 Item(string n,float p,int q);
 friend ifstream & operator>>(ifstream &fis,Item &i);
 friend ofstream & operator<<(ofstream &fos,Item &i);
 friend ostream & operator<<(ostream &os,Item &i);

};
int main()
{
 int n;
 string name;
 float price;
 int qty;
 cout<<"Enter number of Item:";
 cin>>n;
 Item *list[n];
 cout<<"Enter All Item "<<endl;
 for(int i=0;i<n;i++)
 {
 cout<<"Enter "<<i+1<<" Item Name , price and quantity";
 cin>>name;
 cin>>price;
 cin>>qty;
 list[i]=new Item(name,price,qty);

 }

 ofstream fos("Items.txt");
 for(int i=0;i<n;i++)
 {
 fos<<*list[i];
 }
 Item item;
 ifstream fis("Items.txt");
 for(int i=0;i<3;i++)
 {
 fis>>item;
 cout<<"Item "<<i<<item<<endl;
 }

}
Item::Item(string n,float p,int q)
{
 name=n;
 price=p;
 qty=q;
}
ofstream & operator<<(ofstream &fos,Item &i)
{
 fos<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
 return fos;
}
ifstream & operator>>(ifstream &fis,Item &i)
{
 fis>>i.name>>i.price>>i.qty;
 return fis;
}
ostream & operator<<(ostream &os,Item &i)
{
 os<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
 return os;
 }
 */
