#include<stdio.h>
int main()
{
int c,d,e;
scanf("%d%d",&c,&d);
e=c-d;
printf("%d",e);
if(e%2==0)
{
printf("the number is even");
}
else
{
printf("the number is odd");
}
return 0;
}
