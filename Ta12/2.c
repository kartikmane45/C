#include<stdio.h>
int main()
{
	int num,r1,c=0;
	printf("enter an number:");
	scanf("%d", &num);

	for(;num;num=num/10)
	{
		r1 = num % 10;
		if( r1 > 5)
		{
			c++;

		}
		
	}
			
	printf("count of digit greater than 5 in given number is:%d\n", c);
}
