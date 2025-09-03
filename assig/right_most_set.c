#include<stdio.h>
int main()
{
	int i,j,m,n,num,pos,c=0;

	printf("enter num:");
	scanf("%d",&num);

	for(pos=15;pos>=0;pos--)
		printf("%d", num >> pos & 1);
		printf("\n");


	for(i=0; i<=31;i++)
	{
		m=num >> i & 1;
			c++;

		if(m)
		{
			//num = num ^ 1 << i;
			printf("%d\n",c);
		}


	}
	printf("\n");

/*
	for(pos=15;pos>=0;pos--)
		printf("%d", num >> pos & 1);
		printf("\n");
		*/
}
