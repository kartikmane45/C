#include<stdio.h>
int main()
{
	int  num;
	for(num = 21 ; num <=39;num=(num+4))
	{
		if(num % 2 !=0)
			printf("%d ",num);
	}
	printf("\n");
}
