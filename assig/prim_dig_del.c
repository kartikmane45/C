#include<stdio.h>
int main()
{
	int num,r,temp,rev=0,i;
	printf("enter an num:");
	scanf("%d", &num);
	
	temp =num;
	for(;temp;temp=temp/10)
	{
		r = temp % 10;
		for(i=2;i<=r;i++)
		{
			if(r % i ==0)
				break;
		}
		if(r != i)
			rev = rev*10+r;

	}
	num =0;
	for(;rev;rev=rev/10)
	{
		r = rev % 10;
		num = num * 10 +r;
	}
	printf("%d\n", num);


}
