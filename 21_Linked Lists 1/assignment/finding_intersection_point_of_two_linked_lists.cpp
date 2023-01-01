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
class StackNode {
public:
    int data;
    StackNode* next;
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
StackNode* newNode(Node* p)
{
    StackNode* stackNode = new StackNode();
    stackNode->next = p;
    return stackNode;
}
 int isEmpty(StackNode* root)
{
    return !root;
}
 
void push(StackNode** root, Node*p)
{
    StackNode* stackNode= newNode(p)
    stackNode->next = *root;
    *root = stackNode;
}

int pop(StackNode** root)
{
    if (isEmpty(*root))
        return NULL;
    StackNode* temp = *root;
    *root = (*root)->next;
     delete temp;
    
}
// travelling from backward with help of stack
void   Intersection_point(Node *head1,Node *head2)
{
    Node *p=head1;
    StackNode *root1,*root2;
 while(p!= NULL) push( &root1,p);
 p= head2;
 while(p) push( &root2,p);

while(stacktop(root1)==stacktop(root2))
{
    p=pop(&root1);
    pop(&root2);

}
cout<<p->data;
}
int main() {

	Node* newNode;
    Node* head1 = new Node(10);

    Node* head2 = new Node(3);

    newNode = new Node(6);

    head2->next = newNode;

    newNode = new Node(9);

    head2->next->next = newNode;

    newNode = new Node(15);
    
    head1->next = newNode;
    head2->next->next->next = newNode;

    newNode = new Node(30);
    
    head1->next->next = newNode;

    Intersection_point(head1,head2);
	
}
