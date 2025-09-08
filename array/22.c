
#include<stdio.h>
int main()
{
	int i,j,ele1,ele2,ele3,k;
	//printf("enter ele:");
	//scanf("%d", &ele);
	int a[3]={1,3,7};
	int b[3]={11,22,33};
	int c[6];
	ele1 = sizeof(a)/sizeof(a[0]);
	ele2 = sizeof(b)/sizeof(b[0]);
	ele3 = sizeof(c)/sizeof(c[0]);

	j=0;
	k=0;
	for(i=0;i<ele3;i++)
	{
		//for(j=0;j<ele2;j++)
	//	{
			if(i % 2 ==0)
			{
			c[i]=a[j];
			j++;
			}
			else
			{
				c[i]=b[k];
				k++;
			}
	//	}


}	
	for(i=0;i<ele3;i++)
		printf("%d ", c[i]);
	printf("\n");


}
