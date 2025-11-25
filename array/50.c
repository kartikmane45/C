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
	
	int num,rev=0,r=0;
	
	for(i=0;i<ele;i++)
	{
		num=a[i];
		rev =0;
		while(num)
		{
			r = num % 10;
			rev = rev* 10 + r;
		num= num /10;
		}
//		printf("%d\n", add);
		if(rev == a[i] && a[i]%2!=0)
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
