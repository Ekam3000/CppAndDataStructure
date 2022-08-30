#include <stdio.h>
#include <stdlib.h>
struct rectangle
{
    int length;
    int bredth;
};
int main()
{
    // struct rectangle r;
    struct rectangle r = {10, 5};
    r.length = 15;
    r.bredth = 10;
    printf("Area of rectangle is %d\n", r.length * r.bredth);
    // accessing with pointer
    // struct rectangle *p =&r;
    // p.length=15; //this is wrong
    // (*p).length=20; //this is right
    // or
    // p->length=20;
    // dynamically
    struct rectangle *p;
    p = (struct rectangle *)malloc(sizeof(struct rectangle));
    // struct rectangle is used for converting malloc to struct rectangle pointer cuz malloc return a null pointer
    p->length = 10;
    printf("%d", p->length);
}