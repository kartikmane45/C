#include<stdio.h>
int main()
{
	int num,c=0,r;
	printf("enter num:");
	scanf("%d", &num);
	for(;num;num=num/10)
	{
		r = num % 10;
		if(r%2 !=0 )
		{
			if(r >= 3 && r < 8)
			c++;
		}
	}
	printf("count of digit are: %d\n", c);
}
