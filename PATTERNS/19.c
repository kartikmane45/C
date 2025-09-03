#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter an no.of rows:");
	scanf("%d", &n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-1)-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
				printf("%c", 'Z'-k);



		}
	printf("\n");
	}

}
