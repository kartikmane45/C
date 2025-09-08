#include<stdio.h>
int main()
{
	int i,ele,*p,b=0,c=0,l=0,d=0,temp,SL;
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

	SL = *p;

	for(i=1;i<ele;i++)
	{
		if(SL > *(p+i))
			SL = *(p+i);
	}

	printf("smallet elemennt in array: %d\n", SL);



}
