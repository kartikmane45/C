#include<stdio.h>
int main()
{
	int a,b,r1;
	printf("enter a:");
	scanf("%d", &a);
	printf("enter b:");
	scanf("%d", &b);

//	r1 = 3*(a)*(b*b)+a*a*a+3*(a)*(b*b)+b*b*b;
	//r1 =(3*a)*(b*b)+(a*a*a)+(3*a)*(b*b)+(b*b*b);
	r1 =3*(a*(b*b))+(a*(a*a))+3*(b*(a*a))+(b*(b*b));


	printf("result is :%d\n", r1);
	return 0;
}
