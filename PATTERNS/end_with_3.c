#include<stdio.h>
int main()
{
	int i,j,k,num,n,c=0,l,num1,r;
	printf("enter n:");
	scanf("%d", &n);
	printf("enter n num:");
	scanf("%d", &num);

//	num =11;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
			printf(" ");

//		num=num1;
/*		
		for(k=0;k<i;)
		{
			c=0;
			for(l=1;l<=num;l++)
			{
				if(num % l ==0)
					c++;
			}
			if(c==2)
			{
				r = num % 10;
				if(r ==3)
				k++;
			}

		num++;
		}
*/
		for(k=0;k<n-i;)
		{
			c=0;
			for(l=1;l<=num;l++)
			{
				if(num % l ==0)
					c++;
			}
			if( c==2)
			{
				r = num % 10;
				if(r ==3)
				{
				printf("%d ", num);
				k++;
				}
			}

			num++;

		}
		printf("\n");
	}

}
