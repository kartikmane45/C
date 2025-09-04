#include<stdio.h>
int main()
{
	int ele,t,i,j;
	printf("enter the no.of elements:");
	scanf("%d", &ele);
	int a[ele];

	ele = sizeof(a)/sizeof(a[0]);

	printf("emnter an arr:\n");
	
	for(i=0;i<ele;i++)
	{
		scanf("%d", &a[i]);
	}

	for(i=0;i<ele;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\nafter swapping array\n");

	for(i=0,j=1;i<ele-1;i=i+2,j=j+2)  // ele -1 remember fot both /// ## i=i+2, j=j+2
	for(i=0;i<ele-1;i=i+2)  // using one variable only	
	{
		t=a[i];
	//	a[i] = a[j];
//		a[j] = t;
	//using one variable
	
		a[i] = a[i+1];
		a[i+1] = t;

	}

	for(i=0;i<ele;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

}
