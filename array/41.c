#include<stdio.h>
int main()
{
	int ele, i,j,k;
	printf("enter ele:");
	scanf("%d", &ele);
	int a[ele];
	printf("enter an array:");
	for(i=0;i<ele;i++)
		scanf("%d", (a+i));

	for(i=0;i<ele;i++)
		printf("%d ", a[i]);
		printf("\n");
	int r, temp;
	printf("no.of times rotate:\n");
	scanf("%d", &r);
	for(i=0;i<r;i++)
	{
		temp=a[0];
		for(j=0;j<ele;j++)
			a[j]=a[j+1];
	
		a[ele-1]=temp;
	}
	for(i=0;i<ele;i++)
		printf("%d ", a[i]);
		printf("\n");
}
