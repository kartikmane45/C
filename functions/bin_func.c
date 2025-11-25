#include<stdio.h>
void bin_print(int);
int main()
{
	int num;
	printf("enter num:");
	scanf("%d",&num);

	bin_print(num);
	
	printf("\n");
}
void bin_print(int num)
{
	int pos,c;
	for(pos=31;pos>=0;pos--)
	{
		printf("%d", num >> pos & 1);
	}
}
