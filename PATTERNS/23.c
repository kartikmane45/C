#include<stdio.h>
int main()
{
	int i,j,k,m,n;
	printf("enter no.of rows:");
	scanf("%d", &n);

	//for(i=0,m=n;i<n;m--,i++)
	for(i=n;i>=1;i--)
	{
		for(j=0;j<n-i;j++)
			printf(" ");
		for(k=0;k<i;k++)
		{
			if(i%2==0)
				printf("%d", i-k);
			else
				printf("%c", 'A'+k);
		}
		printf("\n");
	}
}
