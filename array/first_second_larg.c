#include<stdio.h>
int main()
{
	int i,j,ele,L,S;
	printf("elemets :");
	scanf("%d", &ele);
	int a[ele];

	for(i=0;i<ele;i++)
		scanf("%d", &a[i]);

	for(i=0;i<ele;i++)
		printf("%d ", a[i]);

	if(a[0]>a[i])
	{
		L=a[0];
		S=a[1];
	}
	else
	{
		L=a[1];
		S=a[0];
	}

	for(i=2;i<ele;i++)
	{
		if(a[i]>L)
		{
			S=L;        // remmber if in array oth and 1st poistion if bigger number is there then it sholud chnage that value
			L=a[i];
		}
		else if(a[i]>S  && a[i]!=L)
			S=a[i];

	}

	printf("\nLargest elemner is:%d and second largest:%d\n" , L, S);
	
}
