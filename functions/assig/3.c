#include<stdio.h>
void del_fi_arr(int *,int);
int main()
{
	int a[6],*p;
	int ele=sizeof(a)/sizeof(a[0]);

	p=a;
	printf("enter an elements of array:\n");
	for(int i=0;i<ele;i++)
		scanf("%d",(p+i));
	
	for(int i=0;i<ele;i++)
		printf("%d ",*(p+i));
		printf("\n");
	del_fi_arr(p, ele);
	for(int i=0;i<ele;i++)
		printf("%d ",*(p+i));
		printf("\n");

}
void del_fi_arr(int *p,int ele)
{
	int i,rev=0, r,temp;
	for(i=0;i<ele;i++)
	{
		temp=p[i];
		rev=0;
		while(temp)
		{
			r=temp%10;
			rev=rev*10+r;
			temp=temp/10;
		}
		r=0;
		temp=rev / 10;
		rev=0;
		while(temp)
		{
			r=temp %10;
			rev=rev*10+r;
			temp=temp/10;
		}

		p[i]=rev;

	}
}
