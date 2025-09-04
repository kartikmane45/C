#include<stdio.h>
int main()
{
	int i,j,ele,L;
	printf("elemets :");
	scanf("%d", &ele);
	int a[ele];

	for(i=0;i<ele;i++)
		scanf("%d", &a[i]);

	for(i=0;i<ele;i++)
		printf("%d ", a[i]);

	L=a[0];

	for(i=1;i<ele;i++)
	{
		if(a[i]>L)
		{
			L=a[i];
		}

	}

	printf("\nLargest elemner is:%d\n" , L);
	
}
