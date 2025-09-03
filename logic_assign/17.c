#include<stdio.h>
int main()
{
	int num,r,rev=0;
	printf("enter an number:");
	scanf("%d", &num);

	for(;num;num=num/10)
	{
		r = num % 10;
		if(r % 2!=0)
		rev = rev * 10 + r;


	}

			printf("%d\n", rev);

}
