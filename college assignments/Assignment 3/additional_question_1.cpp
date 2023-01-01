/*Split a Circular Linked List into two halves
If there are odd number of nodes, then first list should contain one extra.
 example->
 head->1->2->3->4->head
 head1->1->2->head1
 and
 head2->3->4->head2
*/
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
    Node *Head1;
    Node *Head2;

public:
    LinkedList(int A[], int n);
    void TwoCircularHalvesOfaCircularLL(int c);
    void Display1();
    void Display2();
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
void LinkedList::TwoCircularHalvesOfaCircularLL(int c)
{
    Node *p = Head;
    Head1 = Head;
    int i = 1;
    if (c % 2 == 0)
    {
        while (i < c / 2)
        {
            p = p->next;
            i++;
        }
    }
    else
    {
        while (i <= c / 2)
        {
            p = p->next;
            i++;
        }
    }
    Head2 = p->next;
    p->next = Head1;
    Node *q = Head2;
    while (q->next != Head)
    {
        q = q->next;
    }
    q->next = Head2;
}
void LinkedList::Display1()
{
    Node *p = Head1;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != Head1);
    cout << endl;
}
void LinkedList::Display2()
{
    Node *p = Head2;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != Head2);
    cout << endl;
}
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    LinkedList l(A, 5);
    int c = l.Length();

    l.TwoCircularHalvesOfaCircularLL(c);
    l.Display1();
    l.Display2();
    return 0;
}