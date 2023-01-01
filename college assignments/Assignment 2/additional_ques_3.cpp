/*
Input:
     1st number = 5x2 + 4x1 + 2x0
     2nd number = -5x1 - 5x0
Output:
        5x2-1x1-3x0
Input:
     1st number = 5x3 + 4x2 + 2x0
     2nd number = 5x^1 - 5x^0
Output:
        5x3 + 4x2 + 5x1 - 3x0
*/
#include <iostream>
using namespace std;
#include <math.h>
struct Node
{
        int coeff;
        int exp;
        struct Node *next;
} *poly = NULL, *poly1 = NULL, *sum = NULL;
void create()
{
        struct Node *t, *last = NULL;
        int num, i;
        cout << "Enter number of terms for 1st polynomial ";
        cin >> num;
        cout << "Enter each term with coeff and exp\n";
        for (i = 0; i < num; i++)
        {
                t = new Node;
                cin >> t->coeff >> t->exp;
                t->next = NULL;
                if (poly == NULL)
                {
                        poly = last = t;
                }
                else
                {
                        last->next = t;
                        last = t;
                }
        }
}
void create1()
{
        struct Node *t, *last = NULL;
        int num, i;
        cout << "\nEnter number of terms for second polynomial";
        cin >> num;
        cout << "Enter each term with coeff and exp\n";
        for (i = 0; i < num; i++)
        {
                t = new Node;
                cin >> t->coeff >> t->exp;
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
void Display(struct Node *p)
{
        while (p)
        {
                cout << p->coeff << "x^" << p->exp << " ";
                p = p->next;
        }
        cout << "\n";
}

void add(struct Node *p1, struct Node *p2)
{
        struct Node *last;
        if (p1->exp > p2->exp)
        {
                sum = last = p1;
                p1 = p1->next;
                sum->next = NULL;
        }
        else if (p1->exp < p2->exp)
        {
                sum = last = p2;
                p2 = p2->next;
                sum->next = NULL;
        }
        else
        {
                last = p1;
                last->coeff += p2->coeff;
                sum = last;
                p1 = p1->next;
                p2 = p2->next;
                sum->next = NULL;
        }
        while (p1 && p2)
        {
                if (p1->exp > p2->exp)
                {
                        last->next = p1;
                        last = p1;
                        p1 = p1->next;
                        last->next = NULL;
                }
                else if (p1->exp < p2->exp)
                {
                        last->next = p2;
                        last = p2;
                        p2 = p2->next;
                        last->next = NULL;
                }
                else
                {
                        last->next = p2;
                        last = p2;
                        last->coeff += p1->coeff;
                        p1 = p1->next;
                        p2 = p2->next;
                        last->next = NULL;
                }
        }
        if (p1)
                last->next = p1;
        if (p2)
                last->next = p2;
}
int main()
{
        create();
        Display(poly);
        create1();
        Display(poly1);
        add(poly, poly1);
        cout << endl;
        Display(sum);
        return 0;
}