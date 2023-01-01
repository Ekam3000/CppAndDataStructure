#include <stdio.h>
double e(int x, int n)
{
 double s=1;
 int i;
 double num=1;
 double den=1;
 
 for(i=1;i<=n;i++)
 {
 num*=x;
 den*=i;
 s+=num/den;
 }
 return s;
}
int main()
{
 printf("%lf \n",e(1,10));
 return 0;
}
/*
int e(int x,int n){
    int s=1;
    for(;n>0;n--){
        s=1+(x/n)*s;
    }
    return s;
}