#include<stdio.h>
int main()
{
	int i,j,ele,t,n;
	printf("enter an ele:");
	scanf("%d", &ele);
	int a[ele];


	for(i=0;i<ele-1;i++)
	{
		scanf("%d",(a+i));
	}
	
	for(i=0;i<ele-1;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{	
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}				
		}
	}


	for(i=ele-1;i>=0;i--)
//	for(i=ele;i>=0;i--)
	{
		if(a[i-1]>10)
		{
			a[i]=a[i-1];
		}else
			break;
	}
	a[i]=10;
	
	for(i=0;i<ele;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");	

}
