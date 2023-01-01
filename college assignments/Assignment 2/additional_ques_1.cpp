/*Given 1->2->3->4->5->NULL, m = 2 and n = 4,

return 1->4->3->2->5->NULL.
*/
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
			tail = tail->next;
		}
		cin >> data;
	}
	return head;
}
void PartiallyReversingLL(Node *p, int m, int n)
{
	int i = 1;
	Node *temp=p;
	Node *q = NULL;
	Node *r = NULL;
	while (p != NULL)
	{
		if (i <= n)
		{
			r = q;
			q = p;
			if (i < m)
			{
				cout<<p->data<<" ";
                temp=p;
			}
			p = p->next;
			q->next = r;
			i++;
		}
		else
		{
			temp->next=q;
			cout << q->data << " ";
			for (i; i > m+1; i--)
			{
				q = q->next;
				cout << q->data << " ";
			}
               q->next=p;
			while (p != NULL)
			{
				cout << p->data<<" ";
				p = p->next;
			}
		}
	}
}
int main()
{
	Node *head = takeInput_Better();
	int m, n;
	cin >> m >> n;
	PartiallyReversingLL(head, m, n);
}