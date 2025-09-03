#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0; j<n-i;j++)
		{
			if(i % 2 ==0)
				printf("* ");
			else
				printf("%d ", 2*j+1);
		}
		printf("\n");
	}
}
