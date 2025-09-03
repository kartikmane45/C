#include<stdio.h>
int main()
{
	int a,b,res;
	printf("enter the values of a and b:\n");
//	printf("a=%db=%d\n",a,b);
	scanf("%d%d",&a,&b);
	printf("a=%db=%d\n",a,b);
	
	res = a*a + 2*(a*b)+ b*b;
	
	printf("a^2+2ab+b^2:%d\n",res);
	return 0;
}
