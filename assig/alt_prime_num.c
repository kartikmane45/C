#include<stdio.h>
int main()
{
	int num,pow=1,i, temp,r1,sum=0,c,a,rev=0;
	
	num =5 ,a =0;
	while(num<=35)
	{
		a=0;
		i=1;
			while(i<=num)
			{
				if(num % i ==0)
					a++;
					i++;
			}
			
		if(a==2)
		{
			c++;
			if(c%2!=0)
				printf("%d\n", num);
		}
		num++;
	}
}
