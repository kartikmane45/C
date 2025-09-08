#include<stdio.h>
int main()
{
	int i,ele,*p,t,*q,j;
	int a[7];
	ele = sizeof(a)/sizeof(a[0]);
	
	//p=a;
	printf("enter elements:\n");
	for(i=0;i<ele-1;i++)  // why ele-1 .... beaucuse intaillay there are 6 elements only
	{
		scanf("%d", (a+i));
	}
	
	for(i=ele;i>0;i--)  // 7 th position is empty shift oner one that side
	{
		a[i]=a[i-1];
	}
	a[0]=99; ///0th poistion insert 99
	



	for(i=0;i<ele;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");	
}
