#include<stdio.h>
int main()
{
	int num, pos;
	printf("enter an number:");
	scanf("%d" ,&num);

//	printf("enter an position:");
//	scanf("%d", &pos);


	num = num ^ (1 << 1);
	num = num ^ (1 << 4);

	printf("after setting a bit number is:%d\n", num);
}
