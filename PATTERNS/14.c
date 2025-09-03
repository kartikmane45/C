#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter an n:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		for(j=2*i+1;j>=1;j--)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}
