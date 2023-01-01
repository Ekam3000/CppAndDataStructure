/*  if given linked list is 1->2->1-
>2->1->3->1 and given key is 1, then output should be 4. After deletion of all the 
occurrences of 1, the linked list is 2->2->3.
*/

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node ()
    {

    }
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
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
Node *SearchingAndDeletingNodeData(Node *p, int data)
{
    int count = 0;
    int index = 0;
    Node *temp;
    Node *temp1;
    while (p != NULL)
    {   
        if(index==0)
        {
        while(p->data == data)
        {
            count++;
            cout<<"count:"<<count<<endl;
            p = p->next;
        }  
        temp=p;
        temp1=temp;
        index =1;
        p=p->next;
        }
        else if(p->data != data)
        {
            temp1->next =p;
            temp1 = p;
            p = p->next;
        }
        else 
        {
            p=p->next;
            count++;
        }
    }
    cout<<"number of times key word appers in LL: "<<count<<endl;
    temp1->next=NULL;
    return temp;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    Node *head = takeInput_Better();
    int data;
    cout<<"enter data value:" << endl;
    cin >> data;
    head = SearchingAndDeletingNodeData(head, data);
    print(head);
}