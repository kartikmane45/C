#include<stdio.h>
int main()
{
	int i,j, n;
	printf("enter an n:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
			printf("%d", 2*j+1);

			printf("\n");
	}
}
