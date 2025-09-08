#include<stdio.h>
int main()
{
	int i,j,ele,*p,r,r1,rev=0,rev1=0,temp,r2, temp1;
	printf("ele:");
	scanf("%d", &ele);
	int a[ele];
	
	p=a;

	for(i=0;i<ele;i++)
		scanf("%d", (p+i));

	printf("before\n");	
	for(i=0;i<ele;i++)
		printf("%d ", *(p+i));
	printf("\nafter\n");	
	for(i=0;i<ele;i++)
	{
		temp=*(p+i);
		//temp = a[i];
		rev=0;
		rev1=0;
		for(;temp;temp=temp/10)
		{
			r = temp % 10;
			rev = rev * 10+r;
		}
		r1 = rev /10;   // deleteed last digit that stored in r1 
		temp= r1;
		for(;temp;temp=temp/10)
		{

			r2 = temp % 10;
			rev1 = rev1 * 10 + r2; 
		}

		printf("%d ", rev1);
	}

		printf("\n");

}
