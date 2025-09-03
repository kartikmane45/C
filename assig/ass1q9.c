#include<stdio.h>
int main()
{
	int num ,r1,sum=0;

	printf("enter an number:");
	scanf("%d", &num);

	for(;num;num=num/10)
	{
		r1 = num % 10;
		if(r1 & 1 !=0)         // remmber if() if zero is ouput in between it leave if if one is answer then only it priont inside if
		{
		}
		else{
			sum = sum + r1;
		}

	}
	printf("sum of even digits is:%d\n", sum);

}
