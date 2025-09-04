#include<stdio.h>
int main()
{
	int i,ele;
	int a[5];

	ele = sizeof(a)/sizeof(a[0]);  //a[0]
	printf("enter an array elememt:\n");
	for(i=0;i<ele;i++)
	{
		scanf("%d", &a[i]);    /// dont forgot  &
	}

	printf("printing this is array:");
	for(i=0;i<ele;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
