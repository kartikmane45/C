#include<stdio.h>
int main()
{
	int i,ele,*p,b=0,c=0,l=0,d=0,temp,SL,SSL;
	printf("enter ele:");
	scanf("%d",&ele);
	int a[ele];
	
	p=a;

	for(i=0;i<ele;i++)
	{
		scanf("%d", (a+i));
	}
	
	for(i=0;i<ele;i++)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");	

	//SL = *p;
	//SSL = *(p+1);
	if(*p < *(p+1))
	{
		SL = *p;
		SSL = *(p+1);
	}
	else if(*(p+1) < *p)
	{
		SL = *(p+1);
		SSL = *p;
	}
	else if(*p == *(p+1)) 
	{
		SL = *(p+1);
		SSL = *(p+1);
	}

	for(i=2;i<ele;i++)
	{
		if(SL > *(p+i))
		{
			SSL = SL;
			SL = *(p+i);
		}
		else if(SSL >  *(p+i) || SSL==SL)
		{
			SSL=*(p+i);
		}
	}

	printf("smallest elemennt in array: %d and seconnd smallest is: %d\n", SL,SSL);


}
