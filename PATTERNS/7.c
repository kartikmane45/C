#include<stdio.h>
int main()
{
	int i,j,n;
//	printf("enter n:");
//	scanf("%d", &n);

	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4-i;j++)
		{
			if(j % 2 ==0){
				if(j == 0)
					printf("%c" , 'A');
				if(j == 2)
					printf("%c" , 'B');
				if(j == 4)
					printf("%c", 'C');
			}
			else
				if(j==1)
					printf("%d" ,j);
				if(j==3)
					printf("%d", j-1);
		}
		printf("\n");
	}
}
