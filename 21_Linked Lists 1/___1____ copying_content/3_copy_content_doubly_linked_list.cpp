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
   LinkedList() 
   { 
      first = NULL; 
   }
   LinkedList(int A[], int n);
   ~LinkedList();

   void Display();
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
      cout << p->data << " ";
      p = p->next;
   }
   cout << endl;
}

int main()
{
   int A[] = {1, 2, 3, 4, 5};
   LinkedList l(A, 5);
   int c = l.Length();
   l.Display();
   return 0;
}
/* 2nd method -->
#include<iostream>
using namespace std;

struct node {
   int data;
   node* next;
   node* prev;
};

node* newNode(int data){
   node* temp = new node;
   temp->data = data;
   temp->next = temp->prev = NULL;
   return temp;
}

void printList(node *head)
{
    node *temp =head;
    while(temp)
    {
        cout<<temp->data<<" ";
       temp= temp->next;
    }
    cout<<endl;
}

int main(){
   node* head = newNode(1);
   head->next = newNode(2);
   head->next->prev = head;
   head->next->next = newNode(3);
   head->next->next->prev = head->next;
   head->next->next->next = newNode(4);
   head->next->next->next->prev = head->next->next;
    printList(head);
}
*/