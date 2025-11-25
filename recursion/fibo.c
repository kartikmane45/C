#include<stdio.h>
int foo(int *p);
int main()
{
	int num,*p,*q;
	printf("enter num:");
	scanf("%d", &num);
	
	p=&num;

	foo(p);
}
int foo(int *p)
{
	int a=0,b=1,c;
	printf("%d %d ", a,b);
	for(c=a+b;c<*p;c=a+b)
	{
		printf("%d ", c);
		a=b;
		b=c;
	}

	
	


}
