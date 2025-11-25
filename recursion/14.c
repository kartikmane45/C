#include<stdio.h>
void bin_bit(int num);
int rev_bit(int num);
int main()
{
	int num;
	printf("enter num:");
	scanf("%d", &num);
	
	bin_bit(num);
	printf("\n");	
	int c=rev_bit(num);
	int pos=31;
	while(pos>=0)
	{
		printf("%d" ,c >> pos & 1);
		pos--;
	}
	printf("\n");	
}
void bin_bit(int num)
{

	static int pos=31;
	if(pos>=0)
	{
		printf("%d", num >> pos &1);
		pos--;
	 bin_bit(num);
	}
	else
	{
		pos=31;
	}

	

}
int rev_bit(int num)
{

	static int pos, num1;
	if(pos<=31)
	{
		num1= (num1 << 1) | (num & 1);
		num >>=1;
		pos++;
	rev_bit(num);
	}
	else
	{
		pos=0;
	}
	return num1;
	
	

}
