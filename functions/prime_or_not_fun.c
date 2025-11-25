#include<stdio.h>
int prime_check(int);
int main()
{
	int num,r;
	printf("enter num:");
	scanf("%d", &num);
	r=prime_check(num);
	if(r==num)
		printf("%d is prime number\n", num);
	else
		printf("%d is not prime\n", num);
}		
int prime_check(int num)
{
	int i,c=0;
	for(i=1;i<=num;i++)
	{
		if(num % i==0)
			c++;
	}
	if(c==2)
		return num;
	else
		return 0;

}

