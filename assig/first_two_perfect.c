#include<stdio.h>
int main()
{
	int num, c=0,i,temp, sum=0;

	for(num=3;c<2;num++)
	{
		sum =0;
		for(i=1;i<num;i++)
		{
			if(num % i ==0)
				sum = sum +i;
		}
		if(sum == num)
		{
			printf("%d\n", num);
			c++;
		}
	}

}
