#include<stdio.h>
void main()
{
int b,f=0;
scanf("%d",&b);
if(b<=100000000000)
{
while(b!=0)
{
b=b/10;
f++;
}
}
printf("%d",f);
}
