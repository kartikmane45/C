#include<stdio.h>
int main()
{
	int num,r,temp,rev=0;
	printf("enter an num:");
	scanf("%d", &num);
	
	temp =num;
	for(;temp;temp=temp/10)
	{
		r = temp % 10;
		if(r % 2 == 0)
		{
			rev = rev * 10 + r;
		}

	}
	num =0;
	for(;rev;rev=rev/10)
	{
		r = rev % 10;
		num = num * 10 +r;
	}
	printf("%d\n", num);


}
