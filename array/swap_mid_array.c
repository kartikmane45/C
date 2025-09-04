#include<stdio.h>
int main()
{
	int ele,i,j,t;
	printf("enter no.of eles:");
	scanf("%d", &ele);
	int a[ele];

	ele = sizeof(a)/sizeof(a[0]);

	for(i=0;i<ele;i++)
	{
		scanf("%d", &a[i]);
	}

	for(i=0;i<ele;i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\nafter mid swapping\n");

	for(i=0,j=i+3;i<ele/2;i++,j++)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}

	for(i=0;i<ele;i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");
}
