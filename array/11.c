#include<stdio.h>
int main()
{
	int i,ele,*p,b=0,c=0,l=0,d=0,temp;
	printf("enter ele:");
	scanf("%d",&ele);
	int a[ele];
	
	p=a;

	for(i=0;i<ele;i++)
	{
		scanf("%d", (a+i));
	}
	
	for(i=0;i<ele;i++)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");	
	for(i=0;i<ele;i++)
	{
		temp = *(p+i);
		
		temp >> 31 & 1 ? c++ :b++;
		if(temp > 0)
		temp & 1 ? d++ : l++;
	}

	printf("pos=%d, neg=%d, even=%d, odd=%d\n", b,c,l,d);
}
