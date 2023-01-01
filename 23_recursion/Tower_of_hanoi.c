#include <stdio.h>
void TOH(int n,int A,int B,int C)
{
 if(n>0)
 {
 TOH(n-1,A,C,B); // A to B (or 1 to 2) using C as an intermediate (3 as an intermediate)
 printf("(%d,%d)\n",A,C);
 TOH(n-1,B,A,C);
}
}
int main()
{
 TOH(4,1,2,3);
 return 0;
}
// 1 disc is at the top
//A is from
// B is intermediate
// C is To.