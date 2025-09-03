#include<stdio.h>
int main()
{
	int num;
	printf("enter an number:");
	scanf("%d",&num);

	num = num >> 1;

	printf("now after deleting last bit number is:%d\n", num);

}
