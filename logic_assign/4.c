#include<stdio.h>
int main()
{
	int num,r,sum=0;
	printf("enter num:");
	scanf("%d", &num);

	for(;num;num=num/10)
	{
		r = num %10;

		if(r < 7)
			sum = sum + r;

	}
	printf("sum of odd number is:%d\n" , sum);
}

