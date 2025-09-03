#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter n:");
	scanf("%d", &n);
	
	for(i=0; i<n;i++)
	{
		for(j=0; j<(n-1)-i; j++)
			printf(" ");
		for(k=0;k<=i;k++)
		{
			if(i % 2 !=0)
				printf("%c" ,k+'A');
			else
			{
				printf("#"); 
			}
		}

		printf("\n");
	}

}
