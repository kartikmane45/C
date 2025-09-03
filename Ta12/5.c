//progream using for -- use bitwise operatoor two print even number between 299 and 275

#include<stdio.h>
int main()
{
//	int num;
//	printf("enter an number:");
	//scanf("%d", &num);

	for(int num = 298;num>=275;num--)
	{
		if((num & 1) ==0)
			printf("%d,",num);
	}
	printf("\n");



}
