#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int A[20];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    printf("elements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d \t", arr.A[i]);
}
int main()
{
    struct Array arr = {{1, 2, 3, 4, 5}, 20, 5};
    Display(arr);
}