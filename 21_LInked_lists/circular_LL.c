#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;
}*Head;   //*Head=NULL; ka meaning ho gya ki h=koi node hi nahi hai ..but we assume we will have atleast one node as head.
void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 Head=(struct Node*)malloc(sizeof(struct Node));
 Head->data=A[0];
 Head->next=Head; // indicating there is only one node which points to itseft ..hence circular 
 last=Head;
 
 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=last->next; // indicating we are creating a circular linked list in which t points to its previous node 
 last->next=t; // so for first time last->next  me 't' ka address gya jo ki head->next me bhi wahi jaye ga 
 last=t; // last pointing to newly built node
 }
}
void Display(struct Node *h)
{
 do
 {
 printf("%d ",h->data);
 h=h->next;
 }while(h!=Head); // becoz first time of loop running p==head , so while,for loop will not work.
 printf("\n");
}
void RDisplay(struct Node *h)
{
 static int flag=0; // static variable is like global variable (created only one time)but it is available within the scope of function.
 if(h!=Head || flag==0)
 {
 flag=1;
 printf("%d ",h->data);
 RDisplay(h->next);
 }
 flag=0;
}
int Length(struct Node *p)
{
 int len=0;
 do
 {
 len++;
 p=p->next;
 
 }while(p!=Head);
 return len;
}
void Insert(struct Node *p,int index, int x)
{
 struct Node *t;
 int i;
 if(index<0 || index > Length(p))
 return;
 
 if(index==0)
 {
 t=(struct Node *)malloc(sizeof(struct Node));
 t->data=x;
 if(Head==NULL)
 {
 Head=t;
 Head->next=Head; // loop runs on head itself
 }
 else // p->next is next to head
 {   //   |
 while(p->next!=Head)p=p->next;
 p->next=t; // last node pointing to 't' node which is before head
 t->next=Head;
 Head=t;
 }
 
 }
 else
 { // index value starts from zero itself
 for(i=0;i<index-1;i++)p=p->next;
 t=(struct Node *)malloc(sizeof(struct Node));
 t->data=x;
 t->next=p->next;
 p->next=t;
 
 }
}
int Delete(struct Node *p,int index)
{
    struct Node *q;
 int i,x;
 
 if(index <0 || index >Length(Head))
 return -1;
 if(index==1)
 {
 while(p->next!=Head)p=p->next;
 x=Head->data;
 if(Head==p) // if head is the only node then head is equals to p
 {
 free(Head);
 Head=NULL;
 }
 else // means there is one node next to head .. and now head as to takes the place of its next node 
 {
 p->next=Head->next;
 free(Head);
 Head=p->next;
 }
 }
 else
 {
 for(i=0;i<index-2;i++)
 p=p->next;
 q=p->next;
 p->next=q->next;
 x=q->data;
 free(q);
 }
 return x;
}
int main()
{
 int A[]={2,3,4,5,6};
 create(A,5);
 
 Delete(Head,8);
 
 RDisplay(Head);
 return 0;
}