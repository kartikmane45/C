#include<stdio.h>
int main()
{
	int num, r1 , c=0;

	printf("enter an number:");
	scanf("%d" , &num);

	for(;num;num=num/10)
	{
		r1 = num % 10;
		c++;

	if(c % 2 == 0)
	{
		if (c==2 && c==3)
		{
			printf("%d & %d", r1, r1);
		}
	}
	else if(c ==3){
		printf("%d\n", r1);
	
	}

	}
}
