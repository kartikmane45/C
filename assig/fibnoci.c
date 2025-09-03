#include<stdio.h>
int main()
{
	int a,b,c;
	a=0;
	b=1;

	printf("%d,%d", a,b);

	for(c=a+b;c<=31;c=a+b)
	{
		printf(",%d", c);
		a=b;
		b=c;
	}
	printf("\n");

}

