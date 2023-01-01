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
Node * MergeTwoSortedLL(Node *head,Node *second)
{
  Node *third=NULL;
  Node *last=NULL;
  if(head->data<= second->data)
  {
      third =head;
      last=head;
      head=head->next;
      last->next=NULL;
  }
  else
  {
     third =second;
      last=second;
      second=second->next;
      last->next=NULL;
  }
  while(head != NULL && second !=NULL)
  {
      if(head->data >= second->data)
      {
          last->next=second;
          last=second;
          second=second->next;
          last->next=NULL;
      }
      else
      {
          last->next=head;
          last=head;
          head=head->next;
          last->next=NULL;
      }
      if(head != NULL)
      last->next=head;
      if(second != NULL)
      last->next=second;
    }
    return third;
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
    Node *third =MergeTwoSortedLL(head,second);
	print(third);
}
