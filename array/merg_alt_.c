
#include<stdio.h>
int main()
{
	 int ele1,ele2,ele3,i,j,k;
	 printf("enter ele1:");
	 scanf("%d", &ele1);
	 printf("enter ele2:");
	 scanf("%d", &ele2);
	 int a[ele1];
	 int b[ele2];
//	 int n = ele1+ele2;
	 int c[ele1+ele2];

	 printf("enter elements of first:\n");
	 for(i=0;i<ele1;i++)
	 	scanf("%d", (a+i));

	 printf("enter elements of second array:\n");
	 for(i=0;i<ele2;i++)
	 	scanf("%d", (b+i));

	//////////////////////////

	i=0;
	j=0;
	k=0;
	for(i=0,j=0;i<ele1 && j< ele2;i++,j++)
	{
		c[k++]=a[i];
		c[k++]=b[j];
	}


	
	for(;i<ele1;i++)
	{
		c[k++]=a[i];
	}
	for(;j<ele2;j++)
	{
		c[k++]=b[j];
	}
	

	for(i=0;i<(ele1+ele2);i++)
		printf("%d ", c[i]);
		printf("\n");


}

