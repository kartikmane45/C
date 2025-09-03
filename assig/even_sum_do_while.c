#include<stdio.h>
int main()
{
	int num,sum=0,r1;
	num = 1542687;

	do
	{
	//	num;
		r1 = num % 10;
		if(r1 % 2==0)
		{
			sum = sum + r1;
		}
		num = num /10;

	}while(num >0);
	printf("%d\n", sum);
}
