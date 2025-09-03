#include<stdio.h>
int main()
{
	int i,j,k,num,n,c=0,l,num1,r,rev=0,temp;
	printf("enter n:");
	scanf("%d", &n);
	printf("enter n num:");
	scanf("%d", &num1);

	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
			printf(" ");

		num=num1;
		
		for(k=0;k<i;)
		{
			temp = num;
			rev=0;
			for(;temp;temp=temp/10)
			{
			r=temp % 10;
			rev = rev * 10 + r;
			}
			if(rev == num)

				k++;

		num++;
		}

		for(k=0;k<n-i;)
		{
			
			temp = num;
			rev=0;
			for(;temp;temp=temp/10)
			{
			r=temp % 10;
			rev = rev * 10 + r;
			}
			if(rev == num)
			{
				printf("%d ", num);
				k++;
			}
			num++;

		}
		printf("\n");
	}

}
