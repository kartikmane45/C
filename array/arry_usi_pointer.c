#include<stdio.h>
int main()
{
	int i,j,ele;
	printf("enter:");
	scanf("%d", &ele);
	int a[ele];
	int *p;

	for(i=0;i<ele;i++)
		scanf("%d", &a[i]);

//	p=&a[i];

	for(i=0;i<ele;i++)
	{
		p=&a[i];
		printf("%d ", *p);
	}
	printf("\n");
}
