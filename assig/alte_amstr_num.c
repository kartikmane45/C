#include<stdio.h>
int main()
{
	int num,pow=1,i, temp,r1,sum=0,c,a;
	
	num =4 ,a =0;
	while(num<=444)
	{
		temp =num;
		c =0;

		while(temp)
		{
		temp = temp/10;
		c++;
		}

		temp=num;
		sum =0;

		while(temp)
		{ 
		r1= temp % 10;
		temp = temp / 10;
		pow =1;
		i=1;
		while(i<=c)
		{
			pow = pow*r1;
			i++;
		}
		sum = sum+pow;
		}
		if(sum == num)
		{
			a++;
			if(a % 2 !=0)
				printf("%d\n", num);
		}

		num++;
	}
}
