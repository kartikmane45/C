#include<stdio.h>
int main()
{

	int i,ele,j,k,pd=1,r=0,sum=0;
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
		//temp=a[i];
		for(k=1;k<a[i];k++)
		{
			if(a[i] % k == 0)
				sum = sum + k;
		}	
		if(a[i]==sum)
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
