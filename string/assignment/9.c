#include<stdio.h>
int main()
{
	char s[200];
	printf("enter string:");
	scanf("%s",s);

//	printf("string is:%s\n",s);

	int len,i,c=0;
	for(len=0;s[len];len++);


	int temp,r;
	temp=len;
	int sum=0;
	while(temp)
	{
		r = temp % 10;
		int fact=1;
		for(i=1;i<=r;i++)
		{
			fact= fact * i;
		}
		sum = sum + fact;
		temp = temp /10;
	}
	if(sum == len)
	{
		printf("yes %d is strong  number\n",len);
	}
	else
	{
		printf("no %d is not strong number\n",len);
	}

}
