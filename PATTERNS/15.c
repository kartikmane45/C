#include<stdio.h>
int main()
{
	int i,j,num,n;
	printf("enter an n:");
	scanf("%d", &n);

	for(i=0;i<n;i++)
	{
		num = 1;
		for(j=0;j<=i;j++)
		{
	
			printf("%d ", num+j);
			num = num + j;
			/*
			modify i=0 to i<=4
			if((i>=0 &&  i<=4) && j==0 )
				printf("%d " ,j+1);
			else if((i>=1 && i<=4) && j==1)
				printf("%d ", j+1);
			else if((i>=2 && i<=4) && j==2)
				printf("%d ", j+2);
			else if((i>=3 && i<=4) && j==3)
				printf("%d ", j+4);
			else if((i=4) && j==4)
				printf("%d ", j+7);
				*/

		}
		printf("\n");
	}
}



