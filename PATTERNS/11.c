#include<stdio.h>
int main()
{
	int i, j,k,n;
	printf("enter n:");
	scanf("%d", &n);
	
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{ 
			if(i==(n-5) && j==n-1)
				printf("*");
			else if(i==(n-4) && j==(n-2))
				printf("*");
			else if(i==(n-3) && j==(n-3))
				printf("*");
			else if(i==(n-2) && j==(n-4))
				printf("*");
			else if(i==(n-1) && j==(n-5))
				printf("*");
			else
				printf("%d", j);
		}
		printf("\n");
	}
}
