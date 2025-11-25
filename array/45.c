#include<stdio.h>
int main()
{
	int ele,i,j;
	printf("enetr ele:");
	scanf("%d", &ele);
	int a[ele];
	printf("enter array:\n");
	for(i=0;i<ele;i++)
		scanf("%d", (a+i));

//	for(i=0;i<ele;i++)
//		printf("%d ", *(a+i));
//	printf("\n");
	//////////////////////////////////////////////
	
	int num,add=0,c=0;
	
	for(i=0;i<ele;i++)
	{
		num=a[i];
		add=0;
		for(j=1;j<num;j++)
		{
			if(num % j ==0)
				add=add+j;
		}
		if(add==a[i])
		{
			printf("num=%d, pos=%d\n", num , i);
			break;
		}
	}





	/////////////////////////////////////////////

}
