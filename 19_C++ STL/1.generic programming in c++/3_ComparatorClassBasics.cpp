// earlier with the help of iterators we were able to compare two int values

// if u want comparisons between any  user defined data type(like any member of classs) ,we will use comparators. in normal iterators search function -->

/*ForwardIterator search(ForwardIterator start, ForwardIterator end, T key)
{   //start,end,key are objects of ForwardIterator,T classes
   while (start != end)
   {
       if (*start == key)
       {
           return start;
       }
       start++;
   }
   return end;
   }
   */
// we can't compare them.

// so to compare user defined data type ..i.e to compare two class objects we need class which will compare two class objects.
#include <iostream>
#include <list>
using namespace std;
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
// here we will compare a new edition c++ book , with its previous/ edition book.. we will see whether its old edition is there or not.
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
    // cmp --> object of class BookCompare.
    // cmp(); // looks like a function call.. also called functor or functional object .
    // cmp() will call operator() which is kind of operator overloading.
    // cmp() is an zero argument object ..means operator() have zero argument passing.
    if (cmp(b1, BookToFind)) // here it is two argument object.
    {
        cout << "true same books!";
    }
}
