/*#include <iostream>
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
 Node *Head; // another way of daclaring head pointer .. in linked list classes .. we can write out code similar to 1_copying_content (bud Node *Head= NULL ki jagah Node *Head karna declare )also but we another method
public:
 LinkedList(){

 }
 LinkedList(int A[],int n);
 ~LinkedList();

 void Display();

 int Length();
};

LinkedList::LinkedList(int A[],int n)
{
 Node *last,*t;
 int i=0;

 Head=new Node;
 Head->data=A[0];
 Head->next=Head;
 last=Head;
 //cout<<last->next; -->head ka address dega
 for(i=1;i<n;i++)
 {
 t=new Node;
 t->data=A[i];
 t->next=last->next;
 last->next=t; // means head ke next me bhi t ka address chala gya .bcoz upto this line last =head
 last=t; // esse karne se last->NEXT ME BHI HEAD KAA ADDRESS HAI
 }
}
LinkedList::~LinkedList()
{
 Node *p=Head;
 while(Head)
 {
 Head=Head->next;
 delete p;
 p=Head;
 }
}
int LinkedList::Length()
{
 Node *p=Head;
 int len=0;

 do
 {
 len++;
 p=p->next;
 }
  while (p !=Head);
 return len;
}
void LinkedList::Display()
{
 Node *p=Head;
 do
 {
cout<<p->data<<" ";
 p=p->next;
 }
  while (p!=Head);
  cout<<endl;
}
int main()
{
 int A[]={1,2,3,4,5};
 LinkedList l(A,5);
 int c=l.Length();
 l.Display();
 return 0;
}
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

public:
    LinkedList()
    {
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
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    LinkedList l(A, 5);
    int c = l.Length();
    l.Display();
    return 0;
}