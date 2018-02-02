#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the number")
scanf("%d%d%d",&a,&b);
c=a*b;
printf("%d,c");
if(c%2==0)
{
printf("the number is even");
}
else
{
printf("the number is odd");
}
return 0;
}
