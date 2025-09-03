#include<stdio.h>
int main()
{
	int num, pos;
	printf("enter an number:");
	scanf("%d" ,&num);

//	printf("enter an position:");
//	scanf("%d", &pos);


	num  =  num >> 1;

	printf("after setting a bit number is:%d\n", num);
}
