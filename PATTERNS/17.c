#include<stdio.h>
int main()
{
	int i,j,k,c,n, num=2;
	printf("enter n:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		num = 2;
		//int count =0;
		for(j=0;j<=i;)
		{
			c=0;
			for(k=1;k<=num;k++)
			{
				if(num % k == 0)
					c++;
				
			}			
			if(c == 2)
			{
				printf("%d ", num);
				//count++;	
				j++;
			}
			num++;

		}
		printf("\n");
	}
}
