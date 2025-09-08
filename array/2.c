#include<stdio.h>
int main()
{
	int i ,j,ele, *p,t;
	//int a[5];
	//ele = sizeof(a)/sizeof(a[0]);
	printf("enter an no.of ele:");
	scanf("%d", &ele);
	int a[ele];
	ele = sizeof(a)/sizeof(a[0]);
	
	p=a;
	printf("enter an elements:\n");
	for(i=0;i<ele;i++)
		scanf("%d", (p+i));

	printf("befor:");

	for(i=0;i<ele;i++)
		printf("%d ", *(p+i));
	printf("\n");



	for(i=0;i<ele-i;i++)
	{
		for(j=0;j<(ele-1)-i;j++)
		{
			if(*(p+j) < *(p+j+1))
			{
			t=*(p+j);
			*(p+j)=*(p+j+1);
			*(p+j+1)=t;
			}
		}
	}



	for(i=0;i<ele;i++)
		printf("%d ", *(p+i));
	printf("\n");
}
