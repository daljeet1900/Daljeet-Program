#include<stdio.h>
int main()
{
int a,n,r=0;
printf("enter no\n");
scanf("%d",&n);
while(n>0)
{
a= n%10;
r= r*10 + a;
n=n/10;
}
printf("reverse no is %d\n",r);
return 0; }
