#include<stdio.h>
int main()
{
	int ele,*p,i,pos,temp,c=0,b=0,m;
	printf("enter ele:");
	scanf("%d", &ele);
	int a[ele];

	p=a;

	for(i=0;i<ele;i++)
		scanf("%d",(p+i));

	for(i=0;i<ele;i++)
		printf("%d ",*(p+i));

	for(i=0;i<ele;i++)
	{
		temp = *(p+i);
		for(pos=31;pos>=0;pos--)
		{
		m= temp >> pos & 1;
		if(m)
		{
			c++;
		}
		else
		{
			b++;
		}
		}

	}
	printf("\nset count= %d, clear count= %d\n", c,b);

}
