#include<stdio.h>
int main()
{
	int ele,i,j,t;
	int *p,*q;
	int a[5] = {11,44,88,22,55};
	
	ele = sizeof(a)/sizeof(a[0]);
	
	p=&a;

	printf("before:");
	for(i=0;i<ele;i++)
	{
	//	p=&a[i];
		printf("%d ", *(p+i));	
	}

	p=&a;
	printf("\n");
	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<(ele-1)-i;j++)
		{
	//		q=&a[j+1];  // using two pointers
			
			if(*(p+j) < *(p+j+1) )
			{
				//using single pointer
				t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;
			}
		}
	}
	printf("after:");
	for(i=0;i<ele;i++)
	{
	
//		p=&a[i];
		printf("%d ", *(p+i));	
	}

	printf("\n");
}
