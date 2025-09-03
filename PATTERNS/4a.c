#include<stdio.h>
int main()
{
	int i,j,k,n,l;
	//printf("enter an no.of rows:");
	//scanf("%d", &n);

	for(i=0;i<5;i++)
	{

		for(j=0;j<i;j++)
			printf(" ");
		for(k=0,l=i;k<5-i;l++,k++)
		{
			printf("%d", (2*l)+1);
		}
		printf("\n");
	}


}
