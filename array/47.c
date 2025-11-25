#include<stdio.h>
int main()
{
	int ele,i,j,k;
	printf("enetr ele:");
	scanf("%d", &ele);
	int a[ele];
	printf("enter array:\n");
	for(i=0;i<ele;i++)
		scanf("%d", (a+i));

//	for(i=0;i<ele;i++)
//		printf("%d ", *(a+i));
//	printf("\n");
	//////////////////////////////////////////////
	
	int num,add=0,c=0,r;
	
	for(i=0;i<ele;i++)
	{
		num=a[i];
		add=0;
		while(num)
		{
			r=num%10;
			add=add*10+r;
			num=num/10;
		}
		if(add==a[i])
		{
			for(k=i;k<ele;k++)
				a[k]=a[k+1];
		i--;
		ele--;
		}
	}
//printf("hello");
	for(i=0;i<ele;i++)
		printf("%d ", *(a+i));
	printf("\n");
}
