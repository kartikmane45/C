#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter an number:");
	scanf("%d", &n);

	for(i=n-1;i>=0;i--)
	{

		for(j=0;j<n-i;j++)
			printf(" ");
		for(k=0;k<(2*i)+1;k++)
		{
			printf("%c", 'P'+k);

		}
			printf("\n");
	}


}
