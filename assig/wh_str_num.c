#include<stdio.h>
int main()
{
	int num,sum=0,r,i,temp,fact=1;
	printf("enter n:");
	scanf("%d" ,&num);
	temp =num;	
	while(temp>0)
	{
		r= temp % 10;
		i=1;
		fact=1;
		while(i<=r)
		{
			fact = fact*i;
			i++;
		}
		sum = sum +fact;

		temp = temp /10;
	}
	if(sum == num)
		printf("number is strong\n");
	else
		printf("number is not strong\n");
		

	
}
