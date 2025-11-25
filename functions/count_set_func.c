#include<stdio.h>
int count_set_bit(int);
void main()
{
	int num,r;
	printf("enter num:");
	scanf("%d", &num);

	r=count_set_bit(num);
	printf("%d",r);
	printf("\n");
}
int count_set_bit(int num)
{
	int pos,c;
	for(pos=31;pos>=0;pos--)
		if(num>>pos & 1)
			c++;

		return c;
}
