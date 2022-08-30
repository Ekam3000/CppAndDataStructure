#include <stdio.h>
struct complex
{
    int real;
    int img;
};
int main()
{

    struct complex c = {10, 5};
    c.real = 1;
    c.img = 2;
}