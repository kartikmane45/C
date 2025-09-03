#include<stdio.h>
int main()
{
	int num,r,c=0;
	printf("enter an number:");
	scanf("%d", &num);

	for(;num;num=num/10)
	{
		r = num % 10;
		c++;


	}

		if(c)
			printf("%d\n", r);

}
