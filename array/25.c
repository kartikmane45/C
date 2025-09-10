#include<stdio.h>
int main()
{
	 int ele,i,j,k,c=0;
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
			if(i>=2)
			a[i]=a[i+2];
			
	}

printf("\n");
for(i=0;i<ele-2;i++)
	printf("%d ",a[i]);

printf("\n");
}


