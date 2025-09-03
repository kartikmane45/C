#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter an no.of rows:");
	scanf("%d", &n);

	for(i=0;i<n;i++)
	{

		for(j=0;j<i;j++)
			printf(" ");
		for(j=0,k=i;j<n-i;k++,j++)
		{
			printf("%d",(2*k)+1 );
		}

			printf("\n");
	}


}
