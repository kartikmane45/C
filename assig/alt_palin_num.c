#include<stdio.h>
int main()
{
	int num,pow=1,i, temp,r1,sum=0,c,a,rev=0;
	
	num =55 ,a =0;
	while(c<5)
	{


		temp = num;
		rev =0;
		while(temp)
		{
			r1= temp % 10;
			rev = rev * 10 + r1;
			temp = temp /10;
		}
		if( rev == num)
		{
			c++;
			//if(c<=5)
				printf("%d\n", num);
		}
		num++;
	}
}
