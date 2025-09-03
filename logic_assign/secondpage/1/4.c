#include<stdio.h>
int main()
{
	int num , num2,r1,r2,r3, sum=0;
	printf("enter an first number:");
	scanf("%d", &num);
	
	r1 = num %10;
	num = num /10;
	r2 = num % 10;
	num = num /10;
	r3 = num % 10;

	sum = r1 + r2 + r3;
	printf("sum of num1=%d &  is equal to: %d\n" , num, sum);

}
