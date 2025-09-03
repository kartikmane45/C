#include<stdio.h>
int main()
{
	int i,j,m,n,num,pos;

	printf("enter num:");
	scanf("%d",&num);

	for(pos=15;pos>=0;pos--)
		printf("%d", num >> pos & 1);
		printf("\n");


	for(i=0, j=12; i<=3;i++,j++)
	{
		m=num >> i & 1;
		n= num >> j & 1;

		if(m!=n)
		{
			num = num ^ 1 << i;
			num = num ^ 1 << j;
		}

	}
	printf("\n");


	for(pos=15;pos>=0;pos--)
		printf("%d", num >> pos & 1);
		printf("\n");
}
