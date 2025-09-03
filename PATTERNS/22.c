#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter an number:");
	scanf("%d", &n);

//	for(i=0,k=n;i<=n;k--,i++)
	for(i=n;i>=1;i--)
	{

		for(j=0;j<n-i;j++)
			printf(" ");
		/*	
		for(j=0;j<=(n-1)-i;j++)
			if(i % 2 !=0)
				printf("%d " , 	k-j);
			else
				printf("* ");

		*/
		for(k=0;k<i;k++)
		{
			if(i % 2 !=0)
				printf("# ");
			else
				printf("%d ", i-k);
		}
			printf("\n");
	}


}
