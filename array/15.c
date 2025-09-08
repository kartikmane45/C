#include<stdio.h>
int main()
{
	int i,ele,*p,t;
	printf("enter ele:");
	scanf("%d",&ele);
	int a[ele];
	
	p=a;

	for(i=0;i<ele;i++)
	{
		scanf("%d", (a+i));
	}
	
	for(i=0;i<ele;i++)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");	

			t = *(p+3);
			*(p+3)= *(p+4);
			*(p+4) = t;
			

	for(i=0;i<ele;i++)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");	
}
