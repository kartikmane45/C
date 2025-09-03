//program to 1s to 6th and last 6th interchage

#include<stdio.h>
int main()
{
	unsigned int num, i=0, i1=0, pos=31, pos1=31, r1,r2, r3,num1;

	printf("enter number:");
	scanf("%u", &num);
//	printf("enter no.of.bits want to rotate:");
//	scanf("%hu" , &nbit);

	L1:
	pos = pos;
	printf("%u" , num >> pos & 1);
	pos = pos -1;
	i++;
	if(i<32)
		goto L1;

	printf("\n");

	r1 = num & 0x000000ff;;
	r1 = r1 << 26;

	r2 = num & 0xff000000;
	r2 = r2 >> 26;


	r3 = num & 0x00ffff00;

	num1 = r1 | r2 | r3;

//	printf("after rotation bits are:%hu\n", num1);


	L2:
	pos1 = pos1;
	printf("%u" , num1 >> pos1 & 1);
	pos1 = pos1 -1;
	i1++;
	if(i1<32)
		goto L2;

	printf("\n");
}
