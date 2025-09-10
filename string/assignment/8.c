#include<stdio.h>
int main()
{
	char s[10];
	printf("enter string:");
	scanf("%s",s);

//	printf("string is:%s\n",s);

	int len,i,c=0;
	for(len=0;s[len];len++);

	for(i=1;i<=len;i++)
	{
		if(len % i ==0)
			c++;
	}
	if(c==2)
	{
		printf("yes %d is prime number\n",len);
	}
	else
	{
		printf("no %d is not prime number\n",len);
	}

}
