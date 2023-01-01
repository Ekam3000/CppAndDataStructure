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
    void Display();
    void Insert(int index, int x);
    int Delete(int index);
    void search(int i);
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

int LinkedList ::Length()
{
    Node *p = first;
    int len = 0;

    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}

void LinkedList::Display()
{
    Node *p = first;
    while (p)
    {
        cout << p->data<<" ";
        p = p->next;
    }
    cout << endl;
}

void LinkedList::Insert(int index, int x)
{
    Node *p = first;
    Node *t;
    int i;

    if (index < 0 || index > Length())
        return;
    if (index == 0)
    {
        t = new Node;
        t->data = x;
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        t = new Node;
        t->data = x;

        t->prev = p;
        t->next = p->next;
        if (p->next)
            p->next->prev = t; // if p->next null nahi hai then node next to 't' (indicated by p->next) uska prev 't' ko point karna chahiye
        p->next = t;
    }
}
int LinkedList::Delete(int index)
{
    Node *p = first;
    int x = -1, i;

    if (index < 1 || index > Length())
        return -1;

    if (index == 0)
    {
        first = first->next; 
        if (first)
            first->prev = NULL; 

        x = p->data;
        delete p;
    }
    else
    {
        for (i = 0; i < index; i++)
            p = p->next;
        p->prev->next = p->next; 
        if (p->next)             
            p->next->prev = p->prev;
        x = p->data;
        delete (p);
    }
    return x;
}

void LinkedList ::search(int i)
{

    Node *p = first;
    int count = 0;
    if (i > Length())
    {
        cout << "element is not present in the linked list";
    }
    while (p->next != NULL)
    {
        if (p->data == i)
        {
            cout << "element is present in the linked list with index value: " << count << endl;
            break;
        }
        p = p->next;
        count++;
    }
}
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    LinkedList l(A, 5);
    l.Display();
    int choice;
    do
    {
        cout << "menu driven program for the linked list:" << endl;
        cout << "1.Insersion anywhere in the linked list." << endl;
        cout << "2.deletion of a specific node." << endl;
        cout << "3.search a node" << endl;
        cout << "4.EXIT" << endl;
        cout << "enter your choice :" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            l.Insert(3, 10);
            l.Display();
            break;
        case 2:
            l.Delete(2);
            l.Display();
            break;
        case 3:
            l.search(4);
            break;
        }
    } while (choice <= 3);
    l.Display();
    return 0;
}
