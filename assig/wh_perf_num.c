#include<stdio.h>
int main()
{
	int num,sum=0,r,i,temp,fact=1;
	printf("enter n:");
	scanf("%d" ,&num);
	i=1;
	while(i<num)
	{
		if(num % i==0)
		{
			sum = sum + i;
		}
		i++;
	}
	if(sum == num)
		printf("number is perfect\n");
	else
		printf("number is not perfect\n");
		

	
}
