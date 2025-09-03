#include<stdio.h>
int main()
{
	int num,c=0,r;
	printf("enter num:");
	scanf("%d", &num);
	for(;num;num=num/10)
	{
		r = num % 10;
		c++;
	}
	printf("count of digit are: %d\n", c);
}
