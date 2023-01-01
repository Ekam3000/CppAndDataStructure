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
Node *Insersion(Node *head, int i, int data)
{
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;
    if (i == 0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
    while (temp != NULL && count < i - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        Node *a = temp->next;
        temp->next = newNode;
        newNode->next = a;
    }
    return head;
}
Node *deleteNode(Node *head, int i)
{
    int count = 0;
    Node *temp = head;

    if (i == 0)
    {
        Node *a = head;
        Node *b = a->next;
        head = b;
        delete a;
        return head;
    }
    while (temp != NULL && count < i - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        Node *a = temp->next;
        Node *b = a->next;
        delete a;
        temp->next = b;
    }
    return head;
}
void searchingNode(Node *head, int data)
{
    int count=0;
    while(head !=NULL)
    {
    if(head->data==data)
    {
        cout<<count<<endl;
        break;
    }
        head=head->next;
        count++;
    }
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
    int i, data;
    cout<<"enter an initial LL :";
    Node *head = takeInput_Better();
    int choice;
    int c = count(head);
    do
    {
        cout << "menu driven program for the linked list:" << endl;
        cout << " 1.Insertion at the beginning." << endl;
        cout << " 2.Insertion at the end." << endl;
        cout << " 3.Insertion in between." << endl;
        cout << " 4.Deletion from the beginning." << endl;
        cout << " 5.Deletion from the end." << endl;
        cout << " 6.Deletion of a specific node." << endl;
        cout << " 7.Search for a node and display its position from head." << endl;
        cout << " 8.Display all the node values." << endl;
        cout << "enter your choice :" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "enter data value:" << endl;
            cin >> data;
            head = Insersion(head, 0, data);
            print(head);
            cout<<endl;
            c = c + 1;
            break;

        case 2:
            cout << "enter data value:" << endl;
            cin >> data;
            head = Insersion(head, c, data);
            print(head);
            cout<<endl;
            c = c+1;
            break;

        case 3:
            cout << "enter data value and index value:" << endl;
            cin >> i >> data;
            head = Insersion(head, i, data);
            print(head);
            cout<<endl;
            c = c + 1;
            break;

        case 4:
            head = deleteNode(head, 0);
            c = c - 1;
            print(head);
            cout<<endl;
            break;

        case 5:
            head = deleteNode(head, c);
            c = c - 1;
            print(head);
            cout<<endl;
            break;

        case 6:
            cout << "enter index for the deletion:" << endl;
            cin >> i;
            head = deleteNode(head, i);
            c = c - 1;
            print(head);
            cout<<endl;
            break;

        case 7:
            cout << "enter the searching node:" << endl;
            cin >> data;
            searchingNode(head, data);
            print(head);
            cout<<endl;
            break; 
        case 8:
         print(head);
         cout<<endl;
        }
    } while (choice <= 8);
    return 0;
}