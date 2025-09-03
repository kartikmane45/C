#include<stdio.h>
int main()
{
	int num,r,rev=0,c=0,r1, sum;
	printf("enter an number:");
	scanf("%d", &num);

	for(;num;num=num/10)
	{
		r = num % 10;
//		c++;
		rev = rev * 10 + r;


	}

	num = rev;

	for( sum =0;num;num=num/10)
	{
		r1 = num % 10;
		c++;
			
		if(c>=1 && c<=3)
			sum = sum + r1;

	}


			printf("sum of first three digits: %d\n", sum);

}
