#include<stdio.h>
void sum_arr_fun(int*,int*,int);
int main()
{
	int a[6], b[6],i ,*p,ele,*q;
	ele=sizeof(a)/sizeof(a[0]);

	p=a;
	q=b;
	printf("enter array 1:");
	for(i=0;i<ele;i++)
	{
		scanf("%d", (p+i));
	}

	for(i=0;i<ele;i++)
	{
		printf("%d " , *(p+i));
	}
	printf("\n");
	sum_arr_fun(p,q,ele);
	for(i=0;i<ele;i++)
	{
		printf("%d " , b[i]);

	}
	printf("\n");

}
void sum_arr_fun(int *p, int *q, int ele)
{

	int i,r,sum=0;
	for(i=0;i<ele;i++)
	{
		sum=0;
		for(;*(p+i);*(p+i)=*(p+i)/10)
		{
			r=*(p+i)%10;
			sum=sum+r;
			
		q[i]=sum;
		}
	}
}
