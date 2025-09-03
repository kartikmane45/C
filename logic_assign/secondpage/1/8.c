#include<stdio.h>
int main()
{
	int a,b,op;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);

	op = a*a*a + 3*a*a*b + b*b*b + 3*a*b*b;

	printf("(a+b)^3= %d\n" , op);

}
