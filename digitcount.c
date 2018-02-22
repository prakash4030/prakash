#include <stdio.h>
#include<conio.h>
void main()
{
	int n,count=1;
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		if(n!=0)
		{
			count=count+1;
		}
	}
	printf("%d",count);
  getch();
}
