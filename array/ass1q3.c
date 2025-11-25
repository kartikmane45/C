#include<stdio.h>
int main()
{
	int i,j,ele,t;
	int *p;
	int a[7]= {5,3,1,2,1,9,6};
	ele = sizeof(a)/sizeof(a[0]);
	
	p=&a;

	for(i=0;i<ele;i++)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");
	
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(*(p+i) < *(p+j))
			{
				t=*(p+i);
				*(p+i)=*(p+j);
				*(p+j) = t;	
			}
			/*if(a[i]<a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
				}*/
		}
	}
	printf("\n");
	for(i=0;i<ele;i++)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");
}
