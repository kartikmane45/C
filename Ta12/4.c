#include<stdio.h>
int main()
{
	int num ,f;
	printf("enter an number:");
	scanf("%d" ,&num);

	for(f=1;f<=num;f++)
	{
		if(f % 2 !=0)
			printf("%d,\n",f);
	}




}
