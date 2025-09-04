//to display prime numbers in array


#include<stdio.h>
int main()
{
	int ele,i,j,c=0, temp,r,rev=0;
	int a[10];

	ele = sizeof(a)/sizeof(a[0]);
	printf("enter an elemts of array\n");
	for(i=0;i<ele;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("only prime elemts array is:");
	for(i=0;i<ele;i++)
	{
		temp = a[i];
		rev=0;
		for(;temp;temp=temp/10)
		{
			r=temp % 10;
			rev= rev * 10 + r;
		}
		if(rev == a[i])
			printf("%d ", a[i]);
	}
	printf("\n");

}
