#include <iostream>
#include<cstdlib>
using namespace std;
class queue
{
    public:
    int data;
    queue* next=NULL;
}*front=NULL,*rear=NULL;
class stack
{
    public:
    int data;
    stack* next=NULL;
    stack* top=NULL;
};
void enqueue(int x)
{
    queue* temp=new queue;
    temp->data=x;
    if(rear==NULL)
    {
        front=rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
}
int dequeue()
{
    queue* temp=front;
    int data=temp->data;
    if(front==rear)
    {
        front=rear=NULL;
    }
    else
    {
        front=front->next;
    }
    delete temp;
    return data;
}
void push(stack& s,int x)
{
    stack* temp=new stack;
    temp->data=x;
    if(s.top==NULL)
    {
        s.top=temp;
    }
    else
    {
        temp->next=s.top;
        s.top=temp;
    }
}
int pop(stack& s)
{
    stack* temp=s.top;
    int data=temp->data;
    s.top=s.top->next;
    delete temp;
    return data;
}
void display(queue& q,stack& s1,stack& s2)
{
	if(rear!=NULL)
	{
		queue* temp=front;
		while(temp!=rear)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<temp->data<<endl;
	}
	if(s1.top!=NULL)
	{
		stack* temp=s1.top;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
	if(s2.top!=NULL)
	{
		stack* temp=s2.top;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
}
int main() 
{
    queue q;
    stack s1,s2;
    int n,i,count,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;++i) cin>>arr[i];
    for(i=0;i<n;++i)
    {
        if((s1.top==NULL)||(arr[i]<s1.top->data))
        {
			push(s1,arr[i]);
			display(q,s1,s2);
        }
		else if((s2.top==NULL)||(arr[i]>s2.top->data))
        {
        	push(s2,arr[i]);
        	display(q,s1,s2);
        }
		else
        {
        	if(abs(((s1.top->data)-arr[i]))<abs(((s2.top->data)-arr[i])))
        	{
        		count=0;
        		while((s1.top!=NULL)&&(s1.top->data<=arr[i]))
        		{
        			enqueue(pop(s1));
        			++count;
				}
				push(s1,arr[i]);
				display(q,s1,s2);
				while(count)
				{
					j=count;
					while(--j)
					{
						enqueue(dequeue());
					}
					push(s1,dequeue());     
					--count;
				}
			}
			else
			{
				count=0;
        		while((s2.top!=NULL)&&(s2.top->data>=arr[i]))
        		{
        			enqueue(pop(s2));
        			++count;
				}
				push(s2,arr[i]);
				display(q,s1,s2);
				while(count)
				{
					j=count;
					while(--j)
					{
						enqueue(dequeue());
					}
					push(s2,dequeue());
					--count;
				}
			}
		}
    }
    stack s3;
    while(s2.top!=NULL)
    {
    	push(s3,pop(s2));
	}
	s2.top=s3.top;
	while(n--)
	{
		if((s1.top!=NULL)&&(s2.top!=NULL)&&(s1.top->data<s2.top->data))
		{
			enqueue(pop(s1));
			display(q,s1,s2);
		}
		else if((s1.top!=NULL)&&(s2.top!=NULL)&&(s1.top->data>s2.top->data))
		{
			enqueue(pop(s2));
			display(q,s1,s2);
		}
		else if(s1.top!=NULL)
		{
			enqueue(pop(s1));
			display(q,s1,s2);
		}
		else
		{
			enqueue(pop(s2));
			display(q,s1,s2);
		}
	}
	return 0;
}