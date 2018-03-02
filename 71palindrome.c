#include<stdio.h>
#include<string.h>
int main()
{
char str,str1;
printf("enter the string");
scanf("%s",&str);
str1=strrev(str);
if(str1==str)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
return 0;
}
