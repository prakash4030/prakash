#include <stdio.h>
#include <math.h> 
void main()
{
    int m, a, n, i, tn;
     int sum = 0;
     printf("Enter the terms value");
     scanf("%d", &m,&a,&n);
   sum = (n * (2 * m)+ (n - 1)* a ))/ 2;
     tn = a + (n - 1) * d;
     printf("Sum of the A.P series is: ");
     for (i = d; i <= tn; i = i + a )
     {
          if (i != tn)
            printf("%d + ", i);
          else
              printf("%d = %d", i, sum);
         }
} 
