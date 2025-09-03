#include<stdio.h>
int main()
{
	int num , i,sum =0;
	printf("enter an number:");
	scanf("%d", &num);

	for(int i=1; i<num; i++)
	{
		if(num % i == 0)
		{
			sum = sum + i;
		}
	}
	if(sum == num)
		printf("number is perfect number\n");
	else
		printf("not perfect\n");
}
