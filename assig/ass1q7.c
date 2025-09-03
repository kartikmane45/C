#include<stdio.h>
int main()
{
	int ch, r1,r2, pos ,num=31,pos1=31, i,j,m,ch1=0,i1=0,i2=0;

	printf("enter an num:");
	scanf("%d", &ch);
	for(pos=31;pos>=0;pos--)
	{
		printf("%d", ch >> pos &1);
	}

	printf("\n");

	for(i=1,j<31;i<=6;i++,j--)
	{
		m= ch >> i & 1;
		if(m)
		{
			ch1 = ch1 | 1 << j;
		}
	}
	

	for(pos=31;pos>=0;pos--)
	{
		printf("%d", ch1 >> pos &1);
	}
	printf("\n");

	return 0;
}	
