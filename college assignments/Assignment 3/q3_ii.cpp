#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class LinkedList
{
private:
    Node *Head;

public:
    LinkedList()
    {
    }
    LinkedList(int A[], int n);
    ~LinkedList();
    int Length();
};

LinkedList::LinkedList(int A[], int n)
{
    Node *last, *t;
    int i = 0;

    Head = new Node;
    Head->data = A[0];
    Head->next = Head;
    last = Head;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}
LinkedList::~LinkedList()
{
    Node *p = Head;
    while (Head)
    {
        Head = Head->next;
        delete p;
        p = Head;
    }
}

int LinkedList::Length()
{
    Node *p = Head;
    int len = 0;

    do
    {
        len++;
        p = p->next;
    } while (p != Head);
    return len;
}
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    LinkedList l(A, 5);
    int c = l.Length();
    cout << c << endl;
}