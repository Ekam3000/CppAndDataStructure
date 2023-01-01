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
			tail = tail -> next;
			// OR
			// tail = newNode;
		}
		cin >> data;
	}
	return head;
}
Node* insertNode(Node *head, int data1) {
	Node *newNode = new Node(data1);

	Node *temp = head;
    Node *b;
	if( temp==NULL) {
	head = newNode;
    return head;
	}
	while(temp != NULL && temp->data < data1) {
		b=temp;
		temp = temp -> next;
	}
	if(temp != NULL) {
		 b->next = newNode;
		newNode -> next = temp;
	}
    if(temp ==head){
        newNode->next = head;
        head=newNode;
    }
	return head;
}
void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
}
int main() {
	Node *head = takeInput_Better();
	print(head);
	int  data;
	cin >> data;
	head = insertNode(head, data);
	print(head);
}