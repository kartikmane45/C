#include<stdio.h>
int main()
{
	 int ele,i,j,k,c=0;
	 printf("enter ele1:");
	 scanf("%d", &ele);
	 int a[ele];

	 printf("enter elements of first:\n");
	 for(i=0;i<ele;i++)
	 	scanf("%d", (a+i));

	for(i=0;i<ele;i++)
		printf("%d ", a[i]);

	printf("\n");

	for(i=0;i<ele;i++)
	 {
//		 c++;
		if(a[i] % 2 !=0)
		{
			for(j=i;j<ele-1;j++)
			{		
			a[j]=a[j+1];
			}
		
		ele--;
		i--;
		}
	}

for(i=0;i<ele;i++)
	printf("%d ",a[i]);

printf("\n");
}


