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

  void Display();
  void RDisplay();
  void Insert(int index, int x);
  int Delete(int index);
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
void LinkedList::RDisplay()
{
  Node *h = Head;
  static int flag = 0; // static variable is like global variable (created only one time)but it is available within the scope of function.
  if (h != Head || flag == 0)
  {
    flag = 1;
    cout << h->data;
    h->next;
    RDisplay();
  }
  flag = 0;
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
      Head->next = Head; // loop runs on head itself
    }
    else // p->next is next to head
    {    //   |
      while (p->next != Head)
        p = p->next;
      p->next = t; // last node pointing to 't' node which is before head
      t->next = Head;
      Head = t;
    }
  }
  else
  { // index value starts from zero itself
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
  if (index == 1)
  {
    while (p->next != Head)
      p = p->next;
    x = Head->data;
    if (Head == p) // if head is the only node then head is equals to p
    {
      delete Head;
      Head = NULL;
    }
    else // means there is one node next to head .. and now head as to takes the place of its next node
    {
      p->next = Head->next;
      delete Head;
      Head = p->next;
    }
  }
  else
  {
    for (i = 0; i < index - 2; i++)
      p = p->next;
    q = p->next;
    p->next = q->next;
    x = q->data;
    delete q;
  }
  return x;
}
int main()
{
  int A[] = {1, 2, 3, 4, 5};
  LinkedList l(A, 5);
  int c = l.Length();
  l.Display();
  l.Insert(3, 10);
  l.Delete(2);
  l.Display();

  return 0;
}
