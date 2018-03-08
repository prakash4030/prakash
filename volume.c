#include<stdio.h>
int main()
{
int surface,volume,l,b,h;
printf("enter the values");
scanf("%d%d%d",&l,&b,&h);
volume=l*b*h;
surface=2((l*b)+(b*h)+(l*h));
printf("volume is %d",volume);
printf("surface is %d",surface);
return 0;
}
