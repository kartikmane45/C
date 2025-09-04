#include<stdio.h>
int main()
{
	int i,ele;
	int a[5];

	ele = sizeof(a)/sizeof(a[0]);  //a[0]
	printf("enter an array elememt:\n");
	for(i=0;i<ele;)
	{
	//	if(a[i] % 2==0)  ##### wrong


		scanf("%d", &a[i]);   /// dont forgot  &
		if(a[i] % 2 ==0)
		i++;    //// if  even then only increment 
	
	}


	printf("printing this is array:");
	for(i=0;i<ele;i++)
	{
//		if(a[i] % 2==0)
		printf("%d ", a[i]);
	}
	printf("\n");
}
