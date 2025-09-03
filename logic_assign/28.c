#include<stdio.h>
int main()
{
	int num, r1 ,r2, c=0, rev=0, sum=0, temp;

	printf("enter an number:");
	scanf("%d" , &num);

	temp = num;

	for(;temp;temp=temp/10)
	{
		r1 = temp % 10;

		rev = rev * 10 + r1;

	}

	r1 = rev % 10;  // 1st number

	num = num / 10;
	r2 = num % 10;

	sum = r1 + r2;

	printf("sum of first and last digit : %d\n", sum);
	
}
