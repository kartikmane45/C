#include<stdio.h>
int main()
{
	int i,j,ele,n,num,num1;
	printf("enter an ele:");	
	scanf("%d", &ele);
	int a[ele];

	printf("enter position: ");
	scanf("%d", &n);

	printf("enter number which you want to insert at %d :",n);
	scanf("%d", &num);
	printf("enter number which you want to insert at %d :",n+1);
	scanf("%d", &num1);

	printf("enter elememts:\n");
	for(i=0;i<ele-2;i++)
	{
		scanf("%d", (a+i));
	}

	printf("before\n");
	for(i=0;i<ele-2;i++)
	{
		printf("%d ", a[i]);
	}

	printf("\nafter\n");

	for(i=ele;i>=n;i--)
	{
		a[i]=a[i-1];
	}
	a[n]=num;
	a[n+1]=num1;


	for(i=0;i<ele;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
