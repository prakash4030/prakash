#include<stdio.h>
int main()
{
int a,i;
fact=1;
printf("enter the number");
scanf("%d,&a");
if(a<0)
   printf("the number is not a factorial");
else
for(i=1;i<=a;++i)
{
fact *=i;
}
printf("factorial of %d=%d,a,fact");
}
