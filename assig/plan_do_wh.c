#include<stdio.h>
int main()
{
	int rev=0,num,temp,r,c=0;
	//printf("enter num:");
//	scanf("%d", &num);
	num=88;
	while(num<=131)
	{
	temp =num;
	do
	{
	
		r = temp % 10;
		
		temp = temp / 10;
		
		rev = rev * 10 + r;
			

	}while(temp>0);
	if(num == rev)
	{
		c++;
		printf("%d", num);
	}
		num++;

	}
	printf("count of palindrome numbers:%d",c);
}
