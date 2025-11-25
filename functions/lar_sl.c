#include<stdio.h>
void las_sl(const int*, int*,int*,int);
int main()
{
	int a[5],i,ele,l,sl;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter array:");
	for(i=0;i<ele;i++)
		scanf("%d",(a+i));

	las_sl(a,&l,&sl,ele);
	printf("largest: %d\n", l);
	printf("second largest: %d\n", sl);
}
void las_sl(const int *p, int *l, int *sl,int ele)
{
	int i,j;

	if(*p > *(p+1))
	{
		*l=*p;
		*sl=*(p+1);

	}
	else if(*(p+1) >*p)
	{
		*l=*(p+1);
		*sl=*p;
	}


	for(i=2;i<ele;i++)
	{
		if(*(p+i) > *l)
		{
			*sl=*l;
			*l=*(p+i);
		}
		else if(*(p+i)>*sl && *(p+i)<*l)
		{
			*sl=*(p+i);
		}

	}
}
