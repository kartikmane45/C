#include<stdio.h>
int main()
{
	int i,j,k,l;
	printf("enter an n:");
	scanf("%d", &l);

	int n=(l+1)/2;

	for(i=0;i<n;i++)
	{
		for(k=0;k<n-i-1;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf(" %c", 'A'+j);
		}
		printf("\n");
	}
	for(i=n-2;i>=0;i--)
	{

		for(k=0;k<n-i-1;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("%c ", 'A'+j);
		}
		
		printf("\n");
	}

}
