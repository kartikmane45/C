#include<stdio.h>
int main()
{
	int i,j,k,l,c=0,num,n;
	printf("enter n:");
	scanf("%d", &n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
			printf(" ");

		num =10; 
		
			for(k=0;k<i;)
			{
				c=0;
				for(l=1;l<=num;l++)
					if(num % l ==0)
						c++;
					
				if(c==2)
					k++;
				num++;
				
			}

			for(k=0;k<n-i;k++)
			{
				c=0;
				for(l=1;l<=num;l++)
				{
					if(num % l ==0)
						c++;
				}
				if(c==2)
				{
					printf("%d ", num);
					k++;
				}

			num++;
			}
			printf("\n");
		//}
	}
}
