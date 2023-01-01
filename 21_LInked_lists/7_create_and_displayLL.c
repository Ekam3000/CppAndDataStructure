#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *first = NULL; // for implimenting our linked list .it is same as head in c++
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node)); // creating node in heap.this is head in c++ , we are allocating memory to head
    first->data = A[0];                                 // head ka data
    first->next = NULL;                                 // head ka kiya store address.as it is first node. so it is not storing address of next node . so ,it is innitiated with zero
    last = first;                                       // tail in c++, tail pointing to ( first newnode) here last also points to first.

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node)); // next newnode creation
        t->data = A[i];
        t->next = NULL;
        last->next = t; // tail pointing to next newnode. when the loop runs for first time . tab jaakar first ke next me kuch address store hoga.
        last = t;
    }
}
/*void Display(struct Node *p)
{
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
} */
void RDisplay(struct Node *p)
{
    if (p != NULL)
    {
        printf("%d ", p->data);
        RDisplay(p->next);
    }
}
int main()
{
    struct Node *temp;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);

    // Display(first);
    RDisplay(first);

    return 0;
}