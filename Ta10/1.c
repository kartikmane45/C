#include<stdio.h>
int main()
{
	char num, pos;
	printf("enter an number:\n");
	scanf("%hhd", &num);
	printf("enter an position which you want to move:\n");
	scanf("%hhd", &pos);
	

	//logic

	num = num | 1 << pos;

	printf("now the number is after ab bit shiftting:%hhd\n", num);
	
}

