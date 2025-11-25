#include<stdio.h>
int half_arr(int *, int);
int main()
{
	int ele;
	printf("enter ele:");
	scanf("%d", &ele);
	int a[ele],i;
//	ele=sizeof(a)/sizeof(a[0]);
	printf("enter array:");
	for(i=0;i<ele;i++)
		scanf("%d", &a[i]);

	int c;
	c=half_arr(a,ele);
	printf("count=%d\n", c);
}
int half_arr(int *n, int ele)
{
	
	static int i=0 ,c=0;


	if(i<ele)
	{
		if(n[i]>=39 && n[i]<=99)
			c++;
		i++;
		half_arr(n,ele);
		
	}
	else
	{
		return c;
	}



}
