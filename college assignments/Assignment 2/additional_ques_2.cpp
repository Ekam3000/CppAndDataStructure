/*Given 1->2->3->4->5->NULL and k = 2,

return 4->5->1->2->3->NULL.
*/
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
int count(Node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}
Node *takeInput_Better()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            // tail = newNode;
            // Or
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}
void kreverseFromLast(Node *p, int k)
{
    Node *q=p;
    int i = count(p);
    int j = 0;
    while (i>0)
    {
         if (i <= k)
        {
         cout << q->data << " ";
         i--;
         if(i>0)
         q=q->next;
        }
        else{
        q = q->next;
        i--;
        }
    }
 
    //1.way 
   /* q->next=p;
    q=q->next;
    for(int i=0;i<(5-k);i++)  
    {
     cout<<q->data<<" ";
     q=q->next; 
    }*/
    //2.way
  /*  q->next=p;
    for(int i=0;i<(5-k);i++)
    {
     cout<p->data<<" ";
     p=p->next; 
    }
    */
   //3.way
    q->next=p;
    q=p;
    for(int i=0;i<(5-k);i++)  
    {
     cout<<q->data<<" ";
     q=q->next; 
    }
 }
int main()
{
    Node *head = takeInput_Better();
    int k;
    cout << "k: ";
    cin >> k;
    kreverseFromLast(head, k);
}