#include<stdio.h>

int main()
{
int a[3][3],b[3][3],c[3][3],i,j;

printf("Enter the values of matrix a : \n");

for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   scanf("%d",&a[i][j]);
}
printf("Enter the values of matrix b:\n ");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
        scanf("%d",&b[i][j]);
}
for(i=0;i<3;i++)
{
     for(j=0;j<3;j++)
     c[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];
}
printf("matrix a * b = \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
     printf("%d\t",c[i][j]);
    printf("\n");
}
return 0;
}
