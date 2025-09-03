#include<stdio.h>
int main()
{
	int num, r1 , c=0;

	printf("enter an number:");
	scanf("%d" , &num);

	for(;num;num=num/10)
	{
		r1 = num % 10;
		
		if( r1 % 2 !=0)
		{
			printf("%d\n" , r1);
			break;
		}

	}
}
