
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
Node *reverse(Node *head)
{
	Node *temp = head;
	Node *p = NULL;
	Node *q = NULL;
	while (temp != NULL)
	{
		q = p;
		p = temp;
		temp = temp->next;
		p->next = q;
	}
	head = p;
	return head;
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
	head = reverse(head);
	print(head);
}