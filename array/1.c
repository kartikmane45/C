#include<stdio.h>
int main()
{
	int i,ele;
	int a[]={1,2,3,4,5};

	ele= sizeof(a)/sizeof(a[0]);

	for(i=0;i<ele;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for(i=ele-1;i>=0;i--)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

}
