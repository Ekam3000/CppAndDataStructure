#include<stdio.h>
int power(int m,int n)
{
 if(n==0)
 return 1;
 return power(m,n-1)*m;
}
// alter -- to reduce number of multiplications
int power1(int m,int n)
{
 if(n==0)
 return 1;
 if(n%2==0)
 return power1(m*m,n/2);  // bcoz say we perform 2^4 ,it can also be written as (2*2)^2
 return m*power1(m*m,(n-1)/2); // if power number is odd. 2^5 .. one 2 seperate is taken out so that it becoms 2*(2^4)
}
int main()
{
 int r=power1(9,3);
 printf("%d ",r);
 return 0;
}