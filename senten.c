#include<stdio.h>
int main()
{
int i,count=1;
char a[100];
scanf("%s",&a);
for(i=0;a[i]!=0;i++)
{
if(a[i]==' ')
{
count++;
}
}
return 0;
}
