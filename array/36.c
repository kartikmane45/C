#include<stdio.h>
int main()
{

	int i,ele,j,k,pd=1,r=0,sum=0,temp;
	printf("enter ele:");
	scanf("%d",&ele);

	int a[ele],c=0;

	for(i=0;i<ele;i++)
	{
		scanf("%d",(a+i));
	}

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");


	for(i=0;i<ele;i++)
	{	
		sum=0;
		temp=a[i];
		for(;temp;temp=temp/10)
		{
			r=temp % 10;
			pd=1;
			for(k=1;k<=r;k++)
			{
				pd = pd *k;
			}
			sum = sum + pd;
		}
		if(sum == a[i])
		{
			c++;
			printf("%d ", a[i]);
		}
		
	}


	printf("count= %d\n",c);
/*
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
*/	
}
