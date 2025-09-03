#include<stdio.h>
int main()
{
	int i,j,num,n;
	printf("enter n:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		num =1;
		for(j=0;j<n-i;j++)
		{
			printf("%d ", num+j);
			num = num + j;
		}
		printf("\n");
	}
}
