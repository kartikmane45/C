#include<stdio.h>
int main()
{
	int num ,sum=0,r;
	printf("enter an number:");
	scanf("%d" , &num);

//	for(;num;num=num/10)
//	{

		
		L1:
		r = num % 10;
		sum = sum + r;
		
		if(num !=0)
		{
		num = num /10;
		goto L1;

		}
//	}
	printf("sum of digits of number is: %d\n",sum); 

}
