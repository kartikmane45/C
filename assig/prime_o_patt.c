#include<stdio.h>
int main()
{
	int i,j,c=0,l, a=0,n;
	printf("enter an number: ");
	scanf("%d", &n);
	
	int num=53, temp;

	temp =num;

	while(a<n)
	{
		c=0;
		for(l=1;l<=temp;l++)
		{
			if(temp % l==0)
				c++;
		}
		if(c==2)
			a++;
		temp++;
	}

	for(i=0;i<a;i++)
	{
		
		j=0;
		while(j<a-i)
		{
			c=0;
			for(l=1;l<=num;l++)
			{
				if(num % l==0)
					c++;
			}
			if(c==2)
			{
				printf("%d ", num);
				j++;
			}
			num++;
		}
		printf("\n");
	}
}

