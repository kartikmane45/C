#include<stdio.h>
int main()
{
	int num , num2,r,r1, sum=0;
	printf("enter an first number:");
	scanf("%d", &num);
	
	r = num %10;
	num = num /10;
	r1 = num % 10;

	sum = r + r1;
	printf("sum of num1=%d &  is equal to: %d\n" , num, sum);

}
