#include<stdio.h>
int less_that(int);
int main()
{
	int num;
	printf("enter num:");
	scanf("%d", &num);
	int c;
	c=less_that(num);
	printf("count=%d\n", c);
}
int less_that(int n)
{
	static int c=0, r;
	if(n)
	{
		r=n % 10;
		if(r<6)
			c++;
		n=n/10;
		less_that(n);

	}
	else
	{
		return c;
	}
	



}
