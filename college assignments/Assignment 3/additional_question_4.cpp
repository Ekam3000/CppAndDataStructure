/*Correct the Random Pointer in Doubly Linked List
Given a doubly linked list having exactly one of 
the node pointing to a random node 
in the list, the task is to correct this random
 pointer in the doubly linked list, such that it points to the expected node.*/
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

node *newNode(int data)
{
    node *temp = new node;
    temp->data = data;
    temp->next = temp->prev = NULL;
    return temp;
}

void printList(node *head)
{
    node *temp = head;
    while (temp !=NULL)
    {
        if(temp==head)
        {
            cout<<temp->data<<" ";
        }
        else
        {
        cout<<"("<<temp->prev->data<<")"<<"<-";
        cout<<temp->data<<" ";
        }
        temp = temp->next;
    }

}
node *CorrectingPointer(node *head)
{
    node *p=head;
  while(p->next != NULL)
  {
      if(p->data == p->next->prev->data)
      {
          p=p->next;
      }
      else
      {
          p->next->prev =p;
      }
  }
}
int main()
{
    node *head = newNode(1);
    head->next = newNode(2);
    head->next->prev = head;
    head->next->next = newNode(3);
    head->next->next->prev = head;
    head->next->next->next = newNode(4);
    head->next->next->next->prev = head->next->next;
    cout << "\nIncorrect Linked List: ";
    printList(head);

    CorrectingPointer(head);
    cout << "\nCorrected Linked List: ";
    printList(head);
}