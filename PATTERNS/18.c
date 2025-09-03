#include<stdio.h>
int main()
{
	int i,j,k,l,n;
	printf("enter no of rows:");
	scanf("%d", &n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-1)-i;j++)
		{
			printf("  ");
		}
		//for(k=1;k<=(i+1);k++)
		for(k=0, l=1;k<=i;l++,k++)
		{
				//printf("%d  ", k*k);
				printf("%d ", l*l);



		}
	printf("\n");
	}

}
