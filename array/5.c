#include<stdio.h>
int main()
{
	int i,j,ele,*p,r,r1,add,rev=0,temp;
	printf("enter ele:");
	scanf("%d", &ele);
	int a[ele];
	p=a;
	for(i=0;i<ele;i++)
		scanf("%d", (p+i));
	
	for(i=0;i<ele;i++)
		printf("%d ", *(p+i));


	for(i=0;i<ele;i++)
	{
	temp = a[i];
	rev =0;
	for(;temp;temp = temp/10)
	{
		r = a[i]% 10;
		rev = rev * 10 + r;
		
	}
		r1 = rev % 10;
		add = add+ r1;
		
//	printf("\nr1+ :%d\n", add);
	}
	printf("\nsum is :%d\n", add);
}
