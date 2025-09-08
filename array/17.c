#include<stdio.h>
int main()
{
	int ele,*p,j,i,pos,temp;
	printf("enter ele:");
	scanf("%d", &ele);
	int a[ele];

	p=a;

	for(i=0;i<ele;i++)
		scanf("%d",(p+i));

	for(i=0;i<ele;i++)
		printf("%d ",*(p+i));

	for(i=0;i<(ele/2);i++)
	{
		for(j=0;j<(ele/2)-1;j++)
		{
			if(*(p+j) > *(p+j+1))
			{
				temp = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = temp;
			}
		}
		
	}
	printf("\n");
	for(i=0;i<ele;i++)
		printf("%d ",*(p+i));

	printf("\n");
}
