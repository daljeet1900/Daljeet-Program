#include<stdio.h>
int fib(int n)
{
if (n<=1)
return n;
else
return fib(n-1)+fib(n-2);
}
int main ()
{
int n;
printf("enter n\n");
scanf("%d",&n);
printf("fibonacci is %d\n",fib(n));
getchar();
return 0;
}
