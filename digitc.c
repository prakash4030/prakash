#include<stdio.h>
int main()
{
    int z,a,r,s=0;
    printf("Enter the number:");
    scanf("\n%d",&z);
    while(n>0)
    {
        a=z%10;
        s=s*10+a;
        s=s%10;
        printf("\t%d",s);
        z=z/10;
    }
   return 0;
}
