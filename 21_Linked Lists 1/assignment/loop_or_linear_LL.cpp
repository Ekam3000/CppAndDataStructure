#include <iostream>
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
bool isLoop(Node *head)
{
    Node *p,*q;
    p=head;
    q=head;
    //or
   // p=q=head;
   do{
   p=p->next;
   q=q->next;
   // q=q!=NULL?q->next:NULL;
//or
    q= q? q->next :q;
   }
   while(p&&q && p!=q) ;//until one of the  the pointers are not NULL and  p !=q
  /*
  if(p==q)
  return 1;
  else
  return 0;
  */
 //or
   return p==q ? true : false;
}
int main() {
    Node *t1,*t2;
	Node *head = takeInput_Better();
    count(head);
    Node *temp=head;
    // for making a linked list a loop we follows below steps. 
    
    t1=head->next->next; // your choice upto which element of LL u points your first pointer .
   // t2=head->next->next->next->next; // for the input having 5 elements
    while(1){
    temp= temp->next;
    if(temp!=NULL){
    t2=temp;
    }
    else 
    break;
    }
    t2->next=t1;
    bool c = isLoop(head);
    cout<<c;
}
