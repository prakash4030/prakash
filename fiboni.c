
#include <stdio.h>
#include<conio.h>
void main()
{
    int a, b, c, i, m;
  
    printf("Enter number of terms: ");
    scanf("%d", &m);
    a = 0;
    b = 1;
    c = 0;
    printf("Fibonacci terms: \n");
    for(i=1; i<=m; i++)
    {
        printf("%d, ", c);
        a = b;   
        b = c;    
        c = a + b; 
    }
}
