#include<stdio.h>
int main()
{
	int num ,a,i,c=0;

	num =2;
	while(num<=17)
	{
		i=1;
		a=0;
		while(i<=num)
		{
			if(num % i ==0)
				a++;
				i++;
		}
		if(a==2)
		{
			c++;
		}
	num++;
	}
	printf("count is: %d\n", c);
}
