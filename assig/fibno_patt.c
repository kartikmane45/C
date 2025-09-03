#include<stdio.h>
int main()
{
	int i,j,a,b,c;

	for(i=0;i<5;i++)
	{
		a=0;
		b=1;
		for(j=0;j<=i;j++)
		{
			printf("%d", a);
			c=a+b;
			a=b;
			b=c;
				
		}
		printf("\n");

	}
}
