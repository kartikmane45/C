#include<stdio.h>
int del_arr(int*,int*);
int main()
{
	int a[6];
	int ele = sizeof(a)/sizeof(a[0]);

	int *p,*q;
	p=a;

	printf("enter array:");
	for(int i=0;i<ele;i++)
		scanf("%d", (p+i));

	int c;
	c=del_arr(p,&ele);
printf("%d\n",c);
	for(int i=0;i<ele;i++)
		printf("%d ", a[i]);


	printf("\n");

}
int  del_arr(int *p,int *ele)
{
	int i,j,c=0;

	for(i=0;i<*ele;i++)
	{
		if(p[i]>> 31 & 1)
		{
			c++;
			for(j=i;j<*ele-1;j++)
			{
				p[j]=p[j+1];
			}
			(*ele)--;
			i--;

		}
	
	}

return c;

}

