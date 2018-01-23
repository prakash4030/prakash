#include<stdio.h>
#include<conio.h>
void  main()
{
int n,i,a=0,b=1;
  scanf("%d",&n);
  printf("fibo series is :");
for(i=2;i<=n;i++)
{
  printf("%d\t",a);
c=a+b;
a=b;
b=c;
}
}

