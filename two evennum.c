#include<stdio.h> 
#include<conio.h>

void main()
{

           int f1,f2,rem,i;



           scanf("%d",&f1);

           printf("Give the Final number for the Range ");

           scanf("%d",&f2);

           printf("\n The Even numbers between %d and %d are ",f1,f2); 

           for(i=f1; i<=f2; ++i)
           {

               rem = i % 2;

               if(rem == 0)

               printf("\n  %d",i);

           }
           getch();

    } 
