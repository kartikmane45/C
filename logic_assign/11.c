#include<stdio.h>
int main()
{
	int num,c=0,r,sum=0;
	printf("enter num:");
	scanf("%d", &num);
	for(;num;num=num/10)
	{
		r = num % 10;
		if(r%2 ==0)
		{
			sum = sum + r;
		//	c++;
		}
	}
//	printf("count of digit are: %d\n", c);
	printf("sum of even digit are: %d\n", sum);
}
