#include<stdio.h>
int main()
{
	int i,j,k,l,n;
	printf("enter n:");
	scanf("%d", &n);
	
	for(i=0; i<n;i++)
	{
		for(j=0; j<(n-1)-i; j++)
			printf(" ");
		for(k=0,l=0;k<=i;l++,k++)
		{
			if(i % 2 !=0)
				printf("%d", k+1);
			else
			{
				printf("%c", l+j+'A'); 
			}
		}

		printf("\n");
	}

}
