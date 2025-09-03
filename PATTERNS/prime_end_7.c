#include<stdio.h>
int main()
{
	int i,c=0,num,r1;

	for(num =1 ; num<=300;num++)
	{
		c=0;
		for(i=1;i<=num;i++)
		{
			if(num % i ==0)
				c++;
		}
		if(c==2)
		{
			//temp =num;
			r1 = num % 10;
			if(r1 ==7)
				printf("%d ", num);
		}
	//	printf("\n");

	}
	
		printf("\n");
}
