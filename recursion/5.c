#include<stdio.h>
int rev_num(int);
int main()
{
	int num;
	printf("enter num:");
	scanf("%d", &num);
	int c;
	
	c=rev_num(num);
	printf("%d\n",c);
}
int rev_num(int n)
{
/*
	static int rev=0;
	int r;

	if(n==0)
		return rev;

	r=n%10;
	rev=rev*10+r;
	rev_num(n/10);
*/
	static int rev =0, r;
	if(n)
	{
		r=n%10;
		rev= rev *10+r;
		n = n /10;
		rev_num(n);

	}
	else
	{
		return rev;
	}



	/*
	if(n==0)
		return rev;

	int r;
	int rev;
	
	for(;n;n=n/10)
	{
		r=n%10;
		rev=rev*10+r;

	}
	return rev;


	r=n%10;
	if(n)
	{
	//	r=n%10;
		return rev=rev * 10 + r +rev_num(n/10);
	}
//	else
//	{
//		return 0;
//	}



*/

}
