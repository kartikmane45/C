#include<stdio.h>
void merg_ary(int *, int * , int * ,int ,int ,int);
int main()
{
	int a[3],b[3],c[6],ele1,ele2,ele3;
	ele1=sizeof(a)/sizeof(a[0]);
	ele2=sizeof(b)/sizeof(b[0]);
	ele3=sizeof(c)/sizeof(c[0]);
	int i;
	printf("enter arr1:");
	for(i=0;i<ele1;i++)
		scanf("%d", (a+i));
	printf("enter arr2:");
	for(i=0;i<ele2;i++)
		scanf("%d", (b+i));

	merg_ary(a,b,c,ele1,ele2,ele3);
	for(i=0;i<ele3;i++)
		printf("%d ", c[i]);
		printf("\n");

}
void merg_ary(int *p,int *q,int *r, int ele1 , int ele2, int ele3)
{
	int i,j,k=0;
	for(i=0,j=0;i<ele1 && j< ele2;i++,j++)
	{
		r[k++]=p[i];
		r[k++]=q[j];
	}

	while(i<ele1)
	{
		r[k++]=p[i];
		i++;
	}
	while(j<ele2)
	{
		r[k++]=q[j];
		j++;
	}



}
