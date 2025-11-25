#include<stdio.h>
void in_fun(int *,int ,int ,int);
int main()
{
	int a[6], i,*q;
	printf("enter array::");
	int ele =sizeof(a)/sizeof(a[0]);
	int n,p;

	q=a;
	for(i=0;i<ele-1;i++)
		scanf("%d",(q+i));

	printf("enter element to insert:");
	scanf("%d",&n);
	printf("enter element to insert position:");
	scanf("%d",&p);

	printf("before:");
	for(i=0;i<ele-1;i++)
		printf("%d ",*(q+i));
		printf("\n");
	in_fun(q,ele,n,p);


	printf("before:");
	for(i=0;i<ele;i++)
		printf("%d ",*(q+i));
		printf("\n");

}
void in_fun(int *q,int ele , int n , int p)
{

	int i;
	for(i=ele-1;i>=p;i--)
	{
		q[i]=q[i-1];

	}
	q[p]=n;
}
