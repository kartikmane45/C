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

	int add;
	add=half_arr(a,ele);
	printf("add=%d\n", add);
}
int half_arr(int *n, int ele)
{
	
	static int i=0 ,add=0;


	if(i<ele/2)
	{
		
		add=add+n[i];
		i++;
	//	ele--;
		return half_arr(n,ele);
	}
	else
	{
		return add;
	}



}
