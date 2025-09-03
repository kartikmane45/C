#include<stdio.h>
int main()
{
	int i,j,num, num1,n;
	printf("enter n");
	scanf("%d", &n);
	
	for(i=0;i<5;i++)
	{
		//num =1;
		for(j=0;j<=i;j++)
		{
			if(j==0)
			{
			printf("%d ", num+1);
			num1 = num + 1;
			}
			num = num1;
			if(j==1)
			{
			printf("%d ", num1+1);
			num = num1 + 1;
			}
		}
		printf("\n");
	}
}
