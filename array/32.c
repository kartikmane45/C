
#include<stdio.h>
int main()
{
	 int ele,i,j,k,pod,r,temp;
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
		pod=1;
		temp =a[i];
		for(;temp;temp=temp/10)
		{
			r=temp% 10;
			pod = pod * r;

		a[i] == pod;
			
		}
	//	a[i] == pod;

	}

	for(i=0;i<ele;i++);
	printf("%d ", a[i]);




printf("\n");
}
