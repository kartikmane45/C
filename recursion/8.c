#include<stdio.h>
int prim_num(int);
int main()
{
	int num;
	printf("enter:");
	scanf("%d", &num);

	int r;
	r=prim_num(num);
	if(r==2)
		printf("yes\n");
	else
		printf("no\n");
}
int prim_num(int n)
{

	static int i=1,c=0;

	if(i<=n)
	{
		if(n % i ==0)
			c++;
		i++;
		return prim_num(n);
	}
	else
	{
	//	if(c==2)
	//		return 1;
	//	else
	//		return 0;
	return c;
	}



}
