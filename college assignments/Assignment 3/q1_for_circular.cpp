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
    void Display();
    void Insert(int index, int x);
    int Delete(int index);
    void search(int i);
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
void LinkedList::Insert(int index, int x)
{
    Node *p = Head;
    Node *t;
    int i;
    if (index < 0 || index > Length())
        return;

    if (index == 0)
    {
        t = new Node;
        t->data = x;
        if (Head == NULL)
        {
            Head = t;
            Head->next = Head;
        }
        else
        {
            while (p->next != Head)
                p = p->next;
            p->next = t;
            t->next = Head;
            Head = t;
        }
    }
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        t = new Node;
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}

int LinkedList ::Delete(int index)
{
    Node *p = Head;
    Node *q;
    int i, x;

    if (index < 0 || index > Length())
        return -1;
    if (index == 0)
    {
        while (p->next != Head)
            p = p->next;
        x = Head->data;
        if (Head == p)
        {
            delete Head;
            Head = NULL;
        }
        else
        {
            p->next = Head->next;
            delete Head;
            Head = p->next;
        }
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        x = q->data;
        delete q;
    }
    return x;
}

void LinkedList ::search(int i)
{

    Node *p = Head;
    int count = 0;
    if (i > Length())
    {
        cout << "element is not present in the linked list";
    }
    while (p->next != Head)
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
