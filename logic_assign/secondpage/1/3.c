#include<stdio.h>
int main()
{
	int num , num2,r,r1, sum=0;
	printf("enter an first number:");
	scanf("%d", &num);
	
	r = num %10;
	num = num /10;
	r1 = num % 10;
	num = num / 10;

	num = r;
	num = num * 10 + r1;

	printf("%d\n", num);
}
