#include<stdio.h>
#include<string.h>
int main()
{
char n[100];
int i,a;
printf("/n Enter the string");
scanf("%[^\n]%*s",&n);
a=strlen(n);
for(i=0;i<a;i++)
{
if(n[i]=='')
{
n[i+1]=32;
}
}
n[0]=32;
printf("/nthe capital letter %s",n);
return 0;
}
