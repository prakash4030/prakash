#include<stdio.h>
#include<string.h>
int main()
{
char s[10],s1[10],s2[10];
int i=0,j=0,k=0;
printf("enter the string");
scanf("%s",&s);
while(s[i]!='/0')
{
if(i%2==0)
{
s1[j]=s[i];
printf("%c",s[j]);
j++;
}
else
{
s2[k]=s[i];
printf("%c",s[j]);
k++;
}}
return 0;
}
