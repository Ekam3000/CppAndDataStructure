#include<iostream>
using namespace std;
class Node {
	public :
	int data;
	Node *next;
    Node(){

	}
	Node(int data) {
		this -> data = data;
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
Node *head =NULL;
Node *second =NULL;

void create(int A[],int n)
{
 int i;
 Node *last;
 head=new Node;
 head->data=A[0]; // head ka data
 head->next =NULL;										
 last=head; 
 
 for(i=1;i<n;i++)
 {
 Node *t = new Node ;
 t->data=A[i]; 
 t->next=NULL;
 last->next=t;
 last=t;
 }
}
void create2(int A[],int n)
{
 int i;
 Node *last;
 second=new Node;
 second->data=A[0]; // head ka data
 second->next =NULL;										
 last=second; 
 
 for(i=1;i<n;i++)
 {
 Node *t = new Node ;
 t->data=A[i]; 
 t->next=NULL;
 last->next=t;
 last=t;
 }
}
void concatinate(Node *head,Node *second)
{
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=second;
    second =NULL; // this is our choice
    
}
void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
}
int main() {

	int A[]={3,5,7,10,25,8,32,2};
    create(A,8);
    count(head);
    int B[]={2,8,5,6};
    create2(B,4);
    count(second);
    concatinate(head,second);
	print(head);
}


/*#include <iostream>
using namespace std;
class Node {
	public :
	int data;
	Node *next;
     
	Node(int data) {
		this -> data = data;
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

Node* takeInput_Better() {
	int data;
	cin >> data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data != -1) {
		Node *newNode = new Node(data);
		if(head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail -> next = newNode;
			// tail = newNode;
			// Or
			tail = tail -> next;
			
		}
		cin >> data;
	}
	return head;
}

void concatinate(Node *head,Node *second)
{
    Node *temp=head;
    while(temp->next!=NULL) // temp ko NULL hone se pehle hi loop ke bahar nikal liya 
    {
        temp=temp->next;
    }
   temp->next=second;
// ye while loop lagane ki jarurat hi nii hai as second list is already linked
   while(temp!=NULL)
   {
       temp=temp->next;
   }
     second =NULL; // this is our choice

    
}

void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
}
int main() {

	Node *head = takeInput_Better();
    count(head);
    Node *second= takeInput_Better();
    count(second);
    concatinate(head,second);
	print(head);
}*/