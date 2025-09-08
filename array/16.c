#include<stdio.h>
int main()
{
	int i,ele,*p,t,*q;
	printf("enter ele:");
	scanf("%d",&ele);
	int a[ele];
	
	p=a;
	q=a+(ele-1);

	for(i=0;i<ele;i++)
	{
		scanf("%d", (a+i));
	}
	
	for(i=0;i<ele;i++)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");	

		*p=*p^*q;
		*q= *p^*q;
		*p=*p^*q;		

	for(i=0;i<ele;i++)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");	
}
