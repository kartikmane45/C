#include<stdio.h>
int perfect_num(int);
int main()
{
	int num;
	printf("enter:");
	scanf("%d", &num);

	int r;
	r=perfect_num(num);
	if(r==num)
		printf("yes");
	else
		printf("no");

		printf("\n");
}
int perfect_num(int n)
{
	
	static int i=1,sum=0;
	

	if(i< n)
	{
	if(n%i==0)
		sum=sum+i;

		i++;
		return perfect_num(n);
	}
	else
	{
		return sum;
	}


}
