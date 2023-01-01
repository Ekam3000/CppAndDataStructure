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
   Node *head=NULL;

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
void insertNode(Node *p, int index, int data) {

    if(index < 0 || index > count(p))
    return;

 Node *t = new Node(data);
 int i;
 if(index == 0)
 {
 t->next=head;
 head=t;
 }
 else
 {
 for(i=0;i< index-1;i++)
 p=p->next;
 t->next=p->next;
 p->next=t;
 }
}
void print(Node *head) {
	while(head!= NULL) {
		cout << head -> data << " ";
		head = head-> next;
	}
}
int main() {
   // NOTE->we have declared head as globallly so evey time when we will insert value  at the zero position head value will we updated(both data and next address ) and also won data address will be updated. so if we again call 'insertNode'(which takes head as parameter)(or any other function which takes head as parameter ) then updated value of head will be output shown by head.
   
    // first node compulsory to fill at index zero
    insertNode(head, 0, 1); // insertion option  available for this is at position 0 and 1
    insertNode(head, 0, 2); // insertion option  available for this is at position 0 and 1
    insertNode(head, 0, 3); // insertion option  available for this is at position 0 and 1
    insertNode(head, 0, 4); // insertion option  available for this is at position 0 and 1
    insertNode(head, 1, 5); // insertion option  available for this is at position 0 and 1
    insertNode(head, 1, 5); // insertion option  available for this is at position 0 and 1
    insertNode(head, 2, 6); // insertion option  available for this is at position 0,1,2
    print(head);
}
  