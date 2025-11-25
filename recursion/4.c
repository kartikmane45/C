#include<stdio.h>
int three_that(int);
int main()
{
	int num;
	printf("enter num:");
	scanf("%d", &num);
	int c;
	c=three_that(num);
	printf("sum=%d\n", c);
}
int three_that(int n)
{
/*	if(n==0)
		return 0;
	int r;
	static int i;

	r=n%10;
	//i++;
	if(i!=3) 
	{
		i++;
		return r + three_that(n/10);
	}
	else
	{
		return three_that(n/10);
	}*/

	static int c=0,add=0,r;
	if(c<3)
	{
		r=n%10;
		add= add+r;
		n=n/10;
		c++;
		three_that(n);
	}
	else
	{
		return add;
	}












}
