#include<stdio.h>
void bubble_fun(int*,int );
void print_arr(const int*,int );


int main()
{
	int a[5],ele,i;
	printf("enter array:");
	
	ele = sizeof(a)/sizeof(a[0]);

	for(i=0;i<ele;i++)
		scanf("%d", (a+i));
		
	print_arr(a,ele);
	bubble_fun(a,ele);
	printf("\n");
	print_arr(a,ele);
	printf("\n");
	
}
void bubble_fun(int *p, int ele)
{
	int i,j,t;
	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(p[j]>p[j+1])
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
}
void print_arr(const int *p, int ele)
{
	int i;
	for(i=0;i<ele;i++)
	printf("%d ", *(p+i));
}
