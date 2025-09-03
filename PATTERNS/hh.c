#include<stdio.h>
int main()
{
	int i,j,k,m,n;
	printf("enter no.of rows:");
	scanf("%d", &n);

	for(i=0,m=n;i<n;m--,i++)
	{
		for(j=0;j<=i;j++)
			printf(" ");
		for(k=0;k<n-i;k++)
		{
			if(i%2==0)
				printf("* ");
			else
				printf("%d ", m-k);
		}
		printf("\n");
	}
}
