/*Swap two Nodes of LL
Send Feedback
You have been given a singly linked list of integers along with two integers, 'i,' and 'j.' Swap the nodes that are present at the 'i-th' and 'j-th' positions.
Note :
Remember, the nodes themselves must be swapped and not the datas.

No need to print the list, it has already been taken care. Only return the new head to the list.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first line of each test case or query contains the elements of the singly linked list separated by a single space.

The second line of input contains two integer values 'i,' and 'j,' respectively. A single space will separate them.
 Remember/consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element
Output format :
For each test case/query, print the elements of the updated singly linked list.

Output for every test case will be printed in a seperate line.
Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Where M is the size of the singly linked list.
0 <= i < M
0 <= j < M

Time Limit: 1sec
Sample Input 1 :
1
3 4 5 2 6 1 9 -1
3 4
Sample Output 1 :
3 4 5 6 2 1 9 
 Sample Input 2 :
2
10 20 30 40 -1
1 2
70 80 90 25 65 85 90 -1
0 6
 Sample Output 2 :
10 30 20 40 
90 80 90 25 65 85 70 
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
			// tail = newNode;
			// Or
			tail = tail->next;
		}
		cin >> data;
	}
	return head;
}
Node* SwapTwoNodes(Node *head, int i, int j)
{
	int count = 0;
	Node *temp = head;
	Node *temp1 = head;
	Node *a;
	Node *b;
	Node *c; 
	Node *d;
	
	 if (i==0 && j==(i + 1)) // swapping between 0th index place and 1st index place 
	{
		  a=temp;
		  b=temp->next;           // 0 1 2 3 4 5 6 --> 1 0 2 3 4 5 6 
		  temp=temp->next->next;
		  b->next=a;
		  a->next=temp;
		  head =b;
		  return head;	
	} 
	if (i == 0 && j != i+1) // swapping between 0th index place and > 1st index place .
	{
		a = temp;
		temp = temp->next;
		while (count <= j)   // 0 1 2 3 4 5 --> 2 1 0 3 4 5
		{
			if (count == j)
			{
				b = temp1;
			}
			if (count == j - 1)
			{
				d = temp1;
			}
			count++;
			temp1 = temp1->next;
		}
		b->next = temp;
		d->next = a;
		a->next = temp1;
		head=b;
		return head;

	}
	 if (j == (i + 1) && i !=0 ) //  swapping between two consicutive digits other than 0 and 1.
	{
		while (count <= i)
		{
			if (count == i)
			{
				a = temp;
			}
			if (count == i - 1)
			{
				c = temp;
			}
			count++;
			temp = temp->next;
		}
		  
		     b=temp;
			 temp=temp->next;
		     c->next=b;
			 b->next = a;
			 a->next =temp;
			 return head;
	}
	else
	{
		while (count <= i) // swapping b/w 2 digits seperated by distance apart.
		{
			if (count == i)
			{
				a = temp;
			}
			if (count == i - 1)
			{
				c = temp;
			}
			count++;
			temp = temp->next;
		}
	count = 0;
	while (count <= j)
	{
		if (count == j)
		{
			b = temp1;
		}
		if (count == j - 1)
		{
			d = temp1;
		}
		count++;
		temp1 = temp1->next;
	}
	c->next = b;
	b->next = temp;
	d->next = a;
	a->next = temp1;
    return head;
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
	Node *head = takeInput_Better();
	int i, j;
	cin >> i >> j;
	head = SwapTwoNodes(head, i, j);
	print(head);
} // index value starts from zero

// for swapping only data not nodes u can use this -->
/*void SwapTwoNodes(Node *head,int i, int j,int c)
{
    int count =0;
    Node * temp = head;
    Node * temp1 = head;
    int t1;
    while(count<=i)
    {
        if(count==i)
        {
            t1= temp->data;
           break;
        }
        count++;
        temp=temp->next;
    }
    count =0;
    while(count<=j)
    {
        if(count==j)
        {
            temp->data= temp1->data;
            temp1->data= t1;
           break;
        }
        count++;
        temp1=temp1->next;
    }

}
*/