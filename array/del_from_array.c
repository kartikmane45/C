
#include<stdio.h>
int main()
{
	 int ele,i,j,k;
	 printf("enter ele1:");
	 scanf("%d", &ele);
	 int a[ele];

	 printf("enter elements of first:\n");
	 for(i=0;i<ele;i++)
	 	scanf("%d", (a+i));

	for(i=0;i<ele;i++)
		printf("%d ", a[i]);

	printf("\n");

	for(i=0;i<ele;i++)
	{
		if(i==2)

		for(j=1;j<ele;j++)
		{
			if(a[i]==a[j])
			{	
				continue;
			}
		}

	}

printf("\n");
/*
for(i=0;i<ele-1;i++)
	a[i]=a[i+1];
*/
for(i=0;i<ele-1;i++)
	printf("%d ",a[i]);

printf("\n");
}
