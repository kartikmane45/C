#include<stdio.h>
int fact_num(int p);
int main()
{
	int num, fact=1;
	printf("enter num:");
	scanf("%d", &num);

	int *p;
	p=&num;
	
	int res= fact_num(num);
	printf("%d\n", res);
	
}
int fact_num(int p)
{
	/*
	int fact=1,i;
	for(i=1;i<=*p;i++)
	{
		fact=fact *i;
	}
	return fact;*/
	
//	static int i=1,fact=1;
	if(p)
	{
////		fact = fact *i;
//		i++;
		return p  * fact_num(p-1);
	}
	else
	{
		return 1;
	}




}
