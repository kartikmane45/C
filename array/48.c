#include<stdio.h>
int main()
{
	int ele,i,j;
	printf("enetr ele:");
	scanf("%d", &ele);
	int a[ele];
	int b[ele];
	printf("enter array:\n");
	for(i=0;i<ele;i++)
		scanf("%d", (a+i));

//	for(i=0;i<ele;i++)
//		printf("%d ", *(a+i));
//	printf("\n");
	//////////////////////////////////////////////
	
	int num,k=0,c=0;
	for(j=0;j<ele;j++)
	{
		c=0;
		for(i=1;i<=j;i++)
		{
			if(j%i==0)
				c++;
		}
		if(c==2)
		{
			a[j]=0;
		}
	}






	/////////////////////////////////////////////
	for(i=0;i<ele;i++)
		printf("%d ", *(a+i));
	printf("\n");

}
