#include<stdio.h>
int main()
{
	int n1, n2,n3, sum;
	printf("enter and first digit:");
	scanf("%d",&n1);
	printf("enter and second digit:");
	scanf("%d",&n2);
	printf("enter and third digit:");
	scanf("%d",&n3);

	sum = n1 + n2 ;
	sum = sum + n3;

	printf("sum of three number is:%d\n", sum);
	return 0;
}
