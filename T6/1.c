#include<stdio.h>
int main()
{
	int num,r1,r2,sum;
	printf("enter a digit number:");
	scanf("%d",&num);


	r1 = num %10;
	num = num /10;
	r2 = num % 10;
	num = num / 10;

	sum = r1 + r2;
	printf("sum of two digits of this number is:%d\n", sum);
	return 0;
}
