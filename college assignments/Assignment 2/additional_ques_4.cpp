/*
        Create two linked lists
     
        1st 3->6->9->15->30
        2nd 10->15->30
     
        15 is the intersection point
    */
// first way-->
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
void Intersection_point(Node *head1, Node *head2)
{
    if(head1==NULL || head2==NULL)
    {
        return ;
    }
    Node *temp1=head1;
    Node *temp2=head2;

    while( temp1 != temp2 )
    {
        if(temp1==NULL)
        {
            temp1=head2;
        }
        else 
        {
        temp1=temp1->next;
        }
        if(temp2==NULL)
        {
            temp2=head1;
        }
        else{
          temp2=temp2->next;
        }
    }
    cout<<"intersection node is: "<<temp1<<"and the value at the intersection node is: "<<temp1->data;
}

int main()
{
    Node *newNode;
    Node *head1 = new Node(10);

    Node *head2 = new Node(3);

    newNode = new Node(6);

    head2->next = newNode;

    newNode = new Node(9);

    head2->next->next = newNode;

    newNode = new Node(15);

    head1->next = newNode;
    head2->next->next->next = newNode;

    newNode = new Node(30);

    head1->next->next = newNode;

    Intersection_point(head1, head2);
}


// second way -->
/*
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

int count( Node *p)
{
 int l=0;
 while(p)
 {
 l++;
 p=p->next;
 }
 return l;
}

void Intersection_point(Node *head1, Node *head2)
{
    if(head1==NULL || head2==NULL)
    {
        return ;
    }
    Node *temp1=head1;
    Node *temp2=head2;
    int a=count(head1);
    int b=count(head2);
    if(a>b)
    {
        int i=0;
        while(i<(a-b))
        {
        temp1=temp1->next;
        i++;
        }
    }
    else
    {
        int i=0;
        while(i<(b-a))
        {
        temp2=temp2->next;
        i++;
        }

    }
     while(temp1 != temp2 )
     {
         temp1=temp1->next;
         temp2=temp2->next;
     }
    cout<<"intersection node is: "<<temp1<<"and the value at the intersection node is: "<<temp1->data;
}
int main()
{
    Node *newNode;
    Node *head1 = new Node(10);

    Node *head2 = new Node(3);

    newNode = new Node(6);

    head2->next = newNode;

    newNode = new Node(9);

    head2->next->next = newNode;

    newNode = new Node(15);

    head1->next = newNode;
    head2->next->next->next = newNode;

    newNode = new Node(30);

    head1->next->next = newNode;
    head2->next->next->next->next = newNode;
    Intersection_point(head1, head2);
}
*/
