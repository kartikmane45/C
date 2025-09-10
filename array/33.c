#include<stdio.h>
int main()
{

	int i,ele,j,k,pd=1,r;
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
		pd=1;
		for(k=1;k<=a[i];k++)
		{
		pd = pd *k;
		}

		a[i]=pd;
		
	}



	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	
}
