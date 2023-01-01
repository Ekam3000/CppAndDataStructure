/*Reverse a doubly linked list in groups of given size
/*Given a doubly linked list containing n nodes. The problem is to reverse every group of k nodes in the list.*/

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
    void Kreverse(int k);
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

void LinkedList::Kreverse(int k)
{
    Node *p = first;
    Node *q;
    int i = 1;
    while (p->next != NULL)
    {
        while (i < k && p->next != NULL)
        {
            p = p->next;
            i++;
        }
        q = p;
        while (i >= 1)
        {
            cout << q->data << " ";
            q = q->prev;
            i--;
        }
        p = p->next;
        i = 1;
    }
}
int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8};
    LinkedList l(A, 8);
    int k;
    cout << "value of k for reversing every k nodes in LL:" << endl;
    cin >> k;
    l.Kreverse(k);
}