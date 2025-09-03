#include<stdio.h>
int main()
{
	int a,b,op;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);

	op = a*a + 2*a*b + b*b;

	printf("(a+b)^2= %d\n" , op);

}
