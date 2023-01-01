#include <iostream>
using namespace std;
#include "Node.cpp"
int main()
{
	// Statically
	Node n1(1);
	Node *head = &n1;
	Node n2(2);
	n1.next = &n2;
	cout << n1.data << " " << n2.data << endl;
	cout << head->data << " " << (n1.next)->data << endl;
	cout << head << " " << n1.next << endl;
	//n1.next is quivalent to head->next.
}
