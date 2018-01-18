#include<stdio.h>
int main()
{
int a,b,c,result;
scanf("%d,&a");
b=a;
while(b!=0)
{
c=b%10;
result+=c*c*c*;
b/=10;
}
if(result==a)
printf("The number is armstrong number");
else
printf("the number is not an armstrong number");
}
