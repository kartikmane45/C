#include<stdio.h>
int main()
{
	int num , i,r,sum=0,fact,temp,c=0;

	for(num =2;num<=199;num++)
	{
		temp = num;
		sum =0;
		for(;temp;temp=temp/10)
		{
			r= temp % 10;
			fact =1;
			for(i=1;i<=r;i++)
			{
				fact = fact*i;
			}
			sum = sum+fact;
		}
		if(sum == num)
			c++;
	}
	printf("count of storng number between 1 to 222: %d\n", c);
}
