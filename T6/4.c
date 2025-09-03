#include<stdio.h>
int main()
{
	int num,r1;
	printf("enter an number:");
	scanf("%d",&num);
	
	r1 = num%10;
	num = num/100;
	num = num*10+r1;
	printf("after deleting second last number is:%d\n", num);
	return 0;
}
