#include<stdio.h>
int main()
{
	int num ,sum=0,r,c=0;
	printf("enter an number:");
	scanf("%d", &num);

	for(;num;num=num/10)
	{
		r=num % 10;
//		if(r%2 !=0)
			c++;
			for(c=1;c<=3;c++){
				sum = sum+r;
			}
	}
	
	printf("count: %d\n", c);
	printf("sums of last three odd digit is: %d\n", sum);

}
