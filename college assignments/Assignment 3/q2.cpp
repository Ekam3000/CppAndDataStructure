/*
For example, if elements present in the circular linked list starting from head 
are 20 → 100 → 40 → 80 → 60, then output should be displayed as 20 100 40 80 60 
20*/
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
    void insertingHeadValueAtLast();
    void Display();
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
void LinkedList::insertingHeadValueAtLast()
{
    Node *p = Head;
    Node *t = new Node;
    t->data = Head->data;
    while (p->next != Head)
    {
        p = p->next;
    }
    p->next = t;
    t->next = Head;
}

void LinkedList::Display()
{
    Node *p = Head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != Head);
    cout << endl;
}

int main()
{
    int A[] = {20, 100, 40, 80, 60};
    LinkedList l(A, 5);
    l.Display();
    l.insertingHeadValueAtLast();
    l.Display();
}