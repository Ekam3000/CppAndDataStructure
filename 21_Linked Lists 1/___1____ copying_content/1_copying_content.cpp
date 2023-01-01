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
void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
}
int main() {
	Node *head = takeInput_Better();
	count(head);
	print(head);
}
*/
// NOTE-> hum for loop me count ki condition bhi laga sakte and temp != NULL ki bhi lga sakte .so we have two options.
// above case me hame -1 ke saath terminate karna pade ga linked list ki . agar hum essa ni chahte then niche wala consider karo
// OR
/*
#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
	Node()
	{
	}
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
Node *head = NULL;
void create(int A[], int n)
{
	int i;
	Node *last;
	head = new Node;
	head->data = A[0]; // head ka data
	head->next = NULL;
	last = head;

	for (i = 1; i < n; i++)
	{
		Node *t = new Node;
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
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
	int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
	create(A,8);
	count(head);
	print(head);
}
*/
// NOTE->  hum for loop me count ki condition bhi laga sakte and temp != NULL ki bhi lga sakte .so we have two options.
// 2nd method -->
#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
};
Node *NewNode(int c)
{
	Node *t;
	t = new Node;
	t->data = c;
	t->next = NULL;
	return t;
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
	Node *head;
	head = NewNode(2);
	head->next = NewNode(20);
	head->next->next = NewNode(3);
	head->next->next->next = NewNode(30);
	print(head);
}