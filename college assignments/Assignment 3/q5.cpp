#include <iostream>
using namespace std;
    int count = 0;
class Node
{
    public:
    int data;
    Node *next;
};
class LinkedList
{
public:
    LinkedList()
    {
    }
    Node *NewNode(int c);
    void IsCircular(Node *head);
};

Node *LinkedList::NewNode(int c)
{
    Node *t;
    t = new Node;
    t->data = c;
    t->next = NULL;
    count++;
    return t;
}
void LinkedList:: IsCircular(Node *head)
{
    Node *p = head;
    int i = 1;
    while (i < count)
    {
        p = p->next;
        i++;
    }
    if (p->next == NULL)
    {
        cout << "No\n"
             << endl;
    }
    else if (p->next = head)
    {
        cout << "Yes\n"
             << endl;
    }
}
int main()
{
    LinkedList l;
    Node *head;
    head = l.NewNode(2);
    head->next = l.NewNode(20);
    head->next->next = l.NewNode(3);
    head->next->next->next = l.NewNode(30);
    l.IsCircular(head);
    head->next->next->next->next = head;
    l.IsCircular(head);
}
