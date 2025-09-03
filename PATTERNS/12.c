#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			if((i>=1 && i<=4) && j==0)
				printf("*");
			else if((i>=2 && i<=4) && j==1)
				printf("*");
			else if((i>=3 && i<=4) && j==2)
				printf("*");
			else if((i>=4 && i<=4) && j==3)
				printf("*");
			else
				printf("%c", 69-j);
			
		}
		printf("\n");
	}
}
