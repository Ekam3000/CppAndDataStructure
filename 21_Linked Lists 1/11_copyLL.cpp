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
void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
}
Node *copyLL(Node *head) {
    Node *head2 =new Node(-1);
    Node *dummy =new Node(-1);
    head2=dummy;
while(head != NULL)
{
head2->next = head;
head2=head;
head=head->next;
}
return dummy->next;
}
int main() {
	Node *head = takeInput_Better();
	count(head);
    Node *head2=copyLL(head);
	print(head);
    print(head2);

}