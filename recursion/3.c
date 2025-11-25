#include<stdio.h>
int sum_dig(int);
int main()
{
	int num;
	printf("enter num:");
	scanf("%d", &num);
	int add;
	add=sum_dig(num);
	printf("product:%d\n", add);

}
int sum_dig(int n)
{
	/*
	if(n==0)
		return 1;

	int r;
	r=n %10;
	if(r%3==0)
	{
		return r * sum_dig(n/10);
	}
	else
	{
		return sum_dig(n/10);
	}

*/

	static int add=1,r;	
	if(n)
	{
		r = n % 10;
		if(r % 3 ==0)
			add= add*r;
		n = n / 10;
		sum_dig(n);
	
	}
	else
	{
		return add;
	}





}
