#include <iostream>
using namespace std;
class Node
{
public:
    Node *prev;
    int data;
    Node *next;
};
class LinkedList
{
private:
    Node *first;

public:
    LinkedList() { first = NULL; }
    LinkedList(int A[], int n);
    ~LinkedList();
    int Length();
    void Palimdrome(int c);
};
LinkedList::LinkedList(int A[], int n)
{
    Node *last, *t;
    int i = 0;

    first = new Node;
    first->data = A[0];
    first->prev = first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}
LinkedList::~LinkedList()
{
    Node *p = first;
    while (first)
    {
        first = first->next;
        delete p;
        p = first;
    }
}
int LinkedList :: Length()
{
Node *p=first;
 int len=0;
 
 while(p)
 {
 len++;
 p=p->next;
 }
 return len;
}
void LinkedList::Palimdrome(int c)
{
    Node *p = first;
    while (p->next)
    {
        p = p->next;
    }
    int i = 1;
    int flag = 1;
    while (i <= c / 2)
    {
        if (first->data != p->data)
        {
            cout << "false" << endl;
            flag = 2;
            break;
        }
        i++;
        first = first->next;
        p = p->prev;
    }
    if (flag == 1)
        cout << "true" << endl;
}
int main()
{
    int A[] = {1, 2, 3, 4, 1};
    LinkedList l(A, 5);
    int c=l.Length();
    l.Palimdrome(c);
    return 0;
}
