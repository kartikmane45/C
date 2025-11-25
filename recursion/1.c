#include<stdio.h>
int sum_dig(int);
int main()
{
	int num;
	printf("enter num:");
	scanf("%d", &num);
	int add;
	add=sum_dig(num);
	printf("%d\n", add);

}
int sum_dig(int n)
{
	if(n==0)
		return 0;


	int r;
	r=n %10;
	if(r%2==0)
	{
		return r + sum_dig(n/10);
	}
	else
	{
		return sum_dig(n/10);
	}


}
