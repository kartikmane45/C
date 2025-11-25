#include<stdio.h>
int main()
{
	int ele,i,j;
	printf("enetr ele:");
	scanf("%d", &ele);
	int a[ele];
	printf("enter array:\n");
//	for(i=0;i<ele;i++)
//		scanf("%d", (a+i));

//	for(i=0;i<ele;i++)
//		printf("%d ", *(a+i));
//	printf("\n");
	//////////////////////////////////////////////
	
	int num,k=0,c=0;
	for(num=0;k<ele ;num++)
	{
		c=0;
		for(i=1;i<=num;i++)
		{
			if(num%i==0)
				c++;
		}
		if(c==2)
		{
			a[k++]=num;
		}
	}






	/////////////////////////////////////////////
	for(i=0;i<ele;i++)
		printf("%d ", *(a+i));
	printf("\n");

}
