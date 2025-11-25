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
	int temp,c=0;
	for(i=0;i<ele;i++)
	{
		if(a[i]%2!=0)
			c++;
	}
	int  k=0;
	for(i=0;i<ele;i++)
	{
		if(a[i]%2==0)
		{
			temp=a[i];
			for(j=i;j>k;j--)
				a[j]=a[j-1];
			a[k++]=temp;
//		i--;

		}
	}
	printf("%d\n", temp);
	for(i=0;i<ele;i++)
		printf("%d ", *(a+i));
	printf("\n");

}
