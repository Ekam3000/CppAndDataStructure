/*Send Feedback
For a given singly linked list of integers, find and return its length. Do it using an iterative method.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First and the only line of each test case or query contains elements of the singly linked list separated by a single space. 
 Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element.
Output format :
For each test case, print the length of the linked list.

Output for every test case will be printed in a separate line.
 Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1 sec
Sample Input 1 :
1
3 4 5 2 6 1 9 -1
Sample Output 1 :
7
Sample Input 2 :
2
10 76 39 -3 2 9 -23 9 -1
-1
Sample Output 2 :
8
0
*/
#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int data) {
		this -> data = data;
		next = NULL;
	}
};
Node *takeinput()
{
    int data;
    cin>>data;
    Node *head=NULL;
    Node* tail=NULL;
    while(data != -1)
    {
     Node *newnode= new Node(data);
     if(head==NULL){
        head = newnode;
        tail=newnode;
    }
    else{
        tail->next = newnode;
        tail= newnode;
    }
    cin>>data;
    }
    return head;
}
void print(Node *head)
{
     Node *temp =head;
    int count = 0;
    while( temp !=NULL) // darne ki koi baat nii -1 ko nii gina jaye gaa lenght me .NULL address -1 before element ke pass hi hai.temp =NULL hame -1 ke before wale element par hi mil jaye ga
    {
     temp = temp->next;
     count++;
    }
    cout<<endl<<count;
}
int main()
{
    int n;
    cout << "number of test cases:" << endl;
    cin >> n;
    int count=1;
    do{
    Node *head = takeinput();
      print(head);
    count++;
    }while(count <=n);
}