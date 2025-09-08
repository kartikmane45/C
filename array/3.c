#include<stdio.h>
int main()
{
	int i,j,ele,*p,t;
	printf("enter ele:");
	scanf("%d", &ele);
	int a[ele];

	ele = sizeof(a)/sizeof(a[0]);

	p=a;

	for(i=0;i<ele;i++)
		scanf("%d", (p+i));

	printf("before:\n");
	for(i=0;i<ele;i++)
		printf("%d ", *(p+i));
		printf("\n");
	
	for(i=0;i<(ele+1)/2;i++)
	{
		for(j=0;j<(((ele+1)/2)-1);j++)
		{
		//	if(*(p+j) >*(p+j+1))  asending order
			if(*(p+j) < *(p+j+1))
			{
				t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1) =t;
			}
		}
	}
	for(i=0;i<ele;i++)
		printf("%d ", *(p+i));
		printf("\n");
	
}
