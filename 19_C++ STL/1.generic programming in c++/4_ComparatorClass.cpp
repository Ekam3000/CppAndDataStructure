/*
#include<iostream>
#include<list>
using namespace std;
// template + iterators + comparators
template <class ForwardIterator, class T,class Compare> //ForwardIterator , T ,Compare are just names .. u can also name them X,Y,Z  or something else
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key, Compare cmp)
{  //start,end,key,cmp are objects of ForwardIterator,T,compare classes
    while (start != end)
    {
        if (cmp(*start,key))
        {
            return start;
        }
        start++;
    }
    return end;
}
class Book
{
public:
    string name;
    int price;
    Book()
    {
    }
    Book(string name, int price)
    {
        this->name = name;
        this->price = price;
    }
};
class BookCompare
{
public:
    bool operator()(Book A, Book B)
    {
        if (A.name == B.name)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Book b1("c++", 100);
    Book b2("java", 120);
    Book b3("python", 130);
    list<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);
    Book BookToFind("c++", 110);
    BookCompare cmp;
   // auto it = search(l.begin(),l.end(),BookToFind,cmp);
    list<Book>::iterator it = search(l.begin(),l.end(),BookToFind,cmp);
    // the above two lines have same meaning
     if (it != l.end())
    {
        cout << "book found in the library";
    }
    else
    {
        cout<<"Not found";
    }
 
}
*/

// code if vector container is used.. same output will be found .. nothing change.

#include<iostream>
#include<vector>
using namespace std;
// template + iterators + comparators
template <class ForwardIterator, class T,class Compare> //ForwardIterator , T ,Compare are just names .. u can also name them X,Y,Z  or something else
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key, Compare cmp)
{   //start,end,key,cmp are objects of ForwardIterator,T,compare classes
    while (start != end)
    {
        if (cmp(*start,key))
        {
            return start;
        }
        start++;
    }
    return end;
}
class Book
{
public:
    string name;
    int price;
    Book()
    {
    }
    Book(string name, int price)
    {
        this->name = name;
        this->price = price;
    }
};
class BookCompare
{
public:
    bool operator()(Book A, Book B)
    {
        if (A.name == B.name)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Book b1("c++", 100);
    Book b2("java", 120);
    Book b3("python", 130);
    vector<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);
    Book BookToFind("c++", 110);
    BookCompare cmp;
   // auto it = search(l.begin(),l.end(),BookToFind,cmp);
    vector<Book>::iterator it = search(l.begin(),l.end(),BookToFind,cmp);
    // the above two lines have same meaning
     if (it != l.end())
    {
        cout << "book found in the library";
    }
    else
    {
        cout<<"Not found";
    }
}
