#include<stdio.h>
int main()
{
	int num, r1,r2;
	printf("enter an number :\n");
	scanf("%d", &num);

	r1 = num % 10;
	num = num /10;
	r2 = num %10;
	num = num /10;

	num = r1;
	num = num *10 + r2;

	printf("after reverse tghe number is :%d\n",num);
	return 0;
}
