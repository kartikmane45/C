#include<stdio.h>
int main()
{
	int i ,j,n;
	printf("enter n:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		for(j=0; j<=i;j++)
		{
			if(i % 2 !=0)
			{
				printf("*");
			}
			else
				printf("%d", n-j);
		}
		printf("\n");
	}
}
