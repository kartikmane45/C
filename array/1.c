#include<stdio.h>
int main()
{
	int ele;
//	int a[5];
	int a[5]={10,20,30,40,50};
	
	ele = sizeof(a)/sizeof(a[0]);
	
	for(int i=0;i<ele;i++)
//	for(int i=0;i<=ele-1;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	//for(int i=ele-1;i>=0;i--)
	for(int i=ele-1;i>=0;i--)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
