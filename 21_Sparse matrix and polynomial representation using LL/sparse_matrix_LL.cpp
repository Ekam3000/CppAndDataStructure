#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int i;
    int j;
    int x;
    struct Node *next;
} *poly1 = NULL, *poly2 = NULL, *sum = NULL;
void create()
{
    struct Node *t, *last = NULL;
    int num;
    printf("Enter number of terms ");
    scanf("%d", &num);
    printf("Enter each term row,column and the element\n");
    for (int i = 0; i < num; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d%d%d", &t->i, &t->j, &t->x);
        t->next = NULL;
        if (poly1 == NULL)
        {
            poly1 = last = t;
        }
        else
        {
            last->next = t;
            last = t;
        }
    }
}
void create2()
{
    struct Node *t, *last = NULL;
    int num;
    printf("Enter number of terms ");
    scanf("%d", &num);
    printf("Enter each term row,column and the element\n");
    for (int i = 0; i < num; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d%d%d", &t->i, &t->j, &t->x);
        t->next = NULL;
        if (poly2 == NULL)
        {
            poly2 = last = t;
        }
        else
        {
            last->next = t;
            last = t;
        }
    }
}
void add(struct Node *s1, struct Node *s2)
{
    struct Node *last;
    if (s1->i < s2->i)
    {
        sum = last = s1;
        s1 = s1->next;
        sum->next = NULL;
    }
    else if (s1->i > s2->i)
    {
        sum = last = s2;
        s2 = s2->next;
        sum->next = NULL;
    }
    else
    {
        if (s1->j < s2->j)
        {
            sum = last = s1;
            s1 = s1->next;
            sum->next = NULL;
        }
        else if (s1->j > s2->j)
        {
            sum = last = s2;
            s2 = s2->next;
            sum->next = NULL;
        }
        else
        {
            last = s1;
            last->x += s2->x;
            sum = last;
            s2 = s2->next;
            s1 = s1->next;
            sum->next = NULL;
        }
    }
    while (s1 && s2)
    {
        if (s1->i < s2->i)
        {
            last->next = s1;
            last = s1;
            s1 = s1->next;
            last->next = NULL;
        }
        else if (s1->i > s2->i)
        {
            last->next = s2;
            last = s2;
            s2 = s2->next;
            last->next = NULL;
        }
        else
        {
            if (s1->j < s2->j)
            {
                last->next = s1;
                last = s1;
                s1 = s1->next;
                last->next = NULL;
            }
            else if (s1->j > s2->j)
            {
                last->next = s2;
                last = s2;
                s2 = s2->next;
                last->next = NULL;
            }
            else
            {
                last->next = s1;
                last = s1;
                last->x += s2->x;
                s2 = s2->next;
                s1 = s1->next;
                last->next = NULL;
            }
        }
    }
    if (s1)
        last->next = s1;
    if (s2)
        last->next = s2;
}
void Display(struct Node *p, int m, int n)
{
    int i, j;
    while (p)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == p->i && j == p->j)
                {
                    printf("%d ", p->x);
                    p = p->next;
                }
                else
                    printf("0 ");
            }
            printf("\n");
        }
    }
}
int main()
{
    int m, n;
    printf("Enter dimensions for the first matrix");
    scanf("%d %d", &m, &n);
    create();
    Display(poly1, m, n);
    int a, b;
    printf("Enter dimensions for the second matrix");
    scanf("%d %d", &a, &b);
    create2();
    Display(poly2, a, b);
    int c = a;
    int d = b;
    add(poly1, poly2);
    printf("third matrix\n");
    Display(sum, c, d);
    return 0;
}
/*
Enter non-zero Elements
0 0 1
1 1 1
2 2 1
3 3 1
4 4 1
Enter non-zero Elements
0 0 2
1 0 2
2 0 2
3 0 2
4 0 2
*/