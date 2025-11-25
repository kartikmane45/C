#include<stdio.h>
int perfect_num(int);
int main()
{
	int num;
	printf("enter:");
	scanf("%d", &num);

	int r;
	r=perfect_num(num);
	printf("count=%d\n",r);
}
int perfect_num(int n)
{
	
	static int pos=31,c=0;
	
	if(pos>=0)
	{
		if(n>> pos & 1)
			c++;
		pos--;
		return perfect_num(n);
	}
	else
	{
		return c;
	}
	


}
