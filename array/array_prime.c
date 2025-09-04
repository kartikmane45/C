//to display prime numbers in array


#include<stdio.h>
int main()
{
	int ele,i,j,c=0;
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
		
		c=0;
		for(j=1;j<=a[i];j++)
		{
			if(a[i]% j ==0)
				c++;
		}
		if(c ==2)
		printf("%d ", a[i]);
	}
	printf("\n");

}
