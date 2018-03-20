#include <stdio.h>

void main
{
	int n,a,product=1;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		product=product*a;
		n=n/10;
	}
	printf("%d",product);
}
