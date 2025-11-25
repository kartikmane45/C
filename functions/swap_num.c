#include<stdio.h>
void swap_num(int, int);
int main()
{
	int num1,num2;
	printf("enter num:\n");
	scanf("%d %d",&num1 ,&num2);

	printf("numbers before swap:%d %d\n", num1,num2);
	swap_num(num1,num2);
	printf("numbers after  swap:%d %d\n", num1,num2);


}
void swap_num(int num1, int num2)
{
	int t;
	t=num1;
	num1=num2;
	num2=t;
}
