#include<stdio.h>
int main()
{
int n;
printf("\n Enter the number:");
scanf("%d",&n);
while(n%2==0)
{
printf(\n"%d",(n/2));
n=n/2;
}
return 0;
}
