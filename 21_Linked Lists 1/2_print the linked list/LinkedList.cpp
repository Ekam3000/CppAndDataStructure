#include <iostream>
using namespace std;
#include "Node.cpp"

void print(Node *head)
{
	while (head != NULL)
	//while(head->next != NULL) ye line last node ka element print ni kar paye ga.
	{
		cout << head->data << " ";
		head = head->next;
	}
    // when we come out of our loop head becomes equals to NULL , so an another loop can't be run below one--
 /*	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
 */
  // separately -->
	//Node *temp = head;  // ye temparory pointer isse liye banaya so that hum apne head pointer me rakhe address ko lost naa kar de . bcoz loop end hote hi head pointer ki value zero ho jaati hai.
	/*
		while(temp != NULL) {
		cout << temp -> data << " ";
		temp = temp -> next;
	}*/

}
int main()
{
	// Statically
	Node n1(1);
	Node *head = &n1;
	Node n2(2);
	Node n3(3);
	Node n4(4);
	Node n5(5);

	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;

	print(head);

	print(head); // this will print our linked list second time .as main ke head ke pass apne khud ki copy hai head ki
	/*
	n1.next = &n2;
	cout << n1.data << " " << n2.data << endl;
	// Dynamically
	Node *n3 = new Node(10); // suppose node having an address 780 then n3 will store the address 780
	Node *head = n3; // head containing the address 780
	
	Node *n4 = new Node(20); // suppose node having an address 840 then n4 will store the address 840
	n3 -> next = n4; // n3 ke next  containing the address 840
	*/
}
/*second way of making a linked list-->
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
Node *temp = head; 
	
		while(temp != NULL) {
		cout << temp -> data << " ";
		temp = temp -> next;
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
*/