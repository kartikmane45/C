#include<stdio.h>
int main()
{
	unsigned short int num, r1, r2,r3;
	printf("enter an number:");
	scanf("%hu", &num);
	r1=num & 0x000f;
	r1 = r1 << 12;

	r2 = num & 0xf000;
	r2 = r2 >> 12;

	r3 = r3 && 0x0ff0; // midlle bits

	num = r1 | r2 | r3;

	printf("after shiffting an 1st and last nibble:%hu\n", num);

	return 0;
}
