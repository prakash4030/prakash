#include<stdio.h>
void main()
{
char a[500];
int c1=0,c2=0,i;
gets(a);
for(i=1;a[i]!='\0',i++)
{
if(((a[i]>='a')&&(a[i]<='z'))||((a[i]<='A')&&(a[i]>='Z')))
{
 c1++;
}
elseif((a[i]<='1')&&(a[i]>='9'))
{
c2++;
}
}
if((c1>=0)&&(c2>=0))
{
printf("yes");
}
else
{
printf("no");
}
}
