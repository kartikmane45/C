#include<stdio.h>
int main()
{

	int i,ele,j,k,pd=1,r=0;
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
		r=0;
		//temp=a[i];
		for(k=1;k<=a[i];k++)
		{
			if(a[i] % k == 0)
				r++;
		}	
		if(r==2)
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
