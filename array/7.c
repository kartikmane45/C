#include<stdio.h>
int main()
{
	int i,j,ele,*p,temp,pos;
	printf("ele:");
	scanf("%d", &ele);
	int a[ele];
	
	p=a;

	for(i=0;i<ele;i++)
		scanf("%d", (p+i));

	printf("before\n");	
	for(i=0;i<ele;i++)
		printf("%d ", *(p+i));
	printf("\nbainary of elemnets is:\n");

	for(i=0;i<ele;i++)
	{
		temp=*(p+i);
		for(pos=31;pos>=0;pos--)
		{
			printf("%d" , temp >> pos & 1);
		}
		printf("\n");
	}





}
