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

  void Display();
  void RDisplay();
  void Reverse();
  void Insert(int index, int x);
  int Delete(int index);
  int Length();
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

void LinkedList::Display()
{
  Node *p = first;
  while (p)
  {
    cout << p->data;
    p = p->next; // every time p ko next node ka address milta jaye ga
  }
  cout << endl;
}

void LinkedList::RDisplay()
{
  Node *h = first;
  static int flag = 0; // static variable is like global variable (created only one time)but it is available within the scope of function.
  if (h != NULL || flag == 0)
  {
    flag = 1;
    cout << h->data;
    h->next;
    RDisplay();
  }
  flag = 0;
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
  if (index == 1)
  {
    first = first->next; // first goes to next node
    if (first)
      first->prev = NULL; // if first  is the only node then first=first->next will be a NULL , then first->prev=NULL likhne ka koi faida nii

    x = p->data;
    delete p;
  }
  else
  {
    for (i = 0; i < index - 1; i++)
      p = p->next;
    p->prev->next = p->next; // here p pointing to deleting node
    if (p->next)             // if p->next is not nULL
      p->next->prev = p->prev;
    x = p->data;
    delete (p);
  }
  return x;
}
void LinkedList ::Reverse()
{
  Node *temp;
  Node *p = first;
  while (p != NULL)
  {
    // the below three lines are just like swapping of two variables
    temp = p->next;
    p->next = p->prev;
    p->prev = temp;
    p = p->prev;                      // moving p to next node
    if (p != NULL && p->next == NULL) // when we see first time our last node
      first = p;                      // in this ways first points to last node and output starts printing from last node
  }
}
int main()
{
  int A[] = {1, 2, 3, 4, 5};
  LinkedList l(A, 5);
  int c = l.Length();
  l.Display();
  l.Insert(3, 10);
  l.Delete(2);
  l.Reverse();
  l.Display();
  return 0;
}
