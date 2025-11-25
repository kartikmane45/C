#include<stdio.h>
int rev_arr(int *, int);
int main()
{
	int a[6],i,ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter:");
	for(i=0;i<ele;i++)
		scanf("%d", &a[i]);

	int p;
	rev_arr(a,ele-1);
	for(i=0;i<ele;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
}
int rev_arr(int *p, int q)
{
	static int i=0;
	int t;

	if(i<q)
	{
		t=p[i];
		p[i]=p[q];
		p[q]=t;
		i++;
		return rev_arr(p,q-1);

	}
	else
	{

		return 0;
	
	}

}
