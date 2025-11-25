#include<stdio.h>
int main()
{
	int ele,i,j;
	printf("enetr ele:");
	scanf("%d", &ele);
	int a[ele];
	printf("enter array:\n");
	for(i=0;i<ele;i++)
		scanf("%d", (a+i));

	for(i=0;i<ele;i++)
		printf("%d ", *(a+i));
	printf("\n");
	int temp,k=0;
	for(i=0;i<ele;i++)
	{
		if(a[i]>0)
		{
			temp=a[i];
			for(j=i;j>k;j--)
				a[j]=a[j-1];
		//	i--;
		a[k++]=temp;
		}
	}
	printf("%d\n", temp);
	for(i=0;i<ele;i++)
		printf("%d ", *(a+i));
	printf("\n");

}
