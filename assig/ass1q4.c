#include<stdio.h>
int main()
{
	int num,i=0;
	printf("enter an num:");
	scanf("%d", &num);
	

	 ((num | (0x0000000f & 1 << 3)) % (1<<3) ) ? printf("no\n") : printf("yes\n");
	//((num | 1 << 3) % (1<<3) ==0) ? printf("yes\n") : printf("no\n");

	//(num % (1<<3) ==0) ? printf("yes\n") : printf("no\n");  dont give ==0 beacuse % itslef giving answer in 0 and 1 format
//	num % (1<<3) ? printf("no\n") : printf("yes\n");
}
