#include<stdio.h>
int main()
{
	unsigned short int num,nbit, i=0, i1=0, pos=15, pos1=15, r1,r2, num1;

	printf("enter number:");
	scanf("%hu", &num);
	printf("enter no.of.bits want to rotate:");
	scanf("%hu" , &nbit);

	L1:
	pos = pos;
	printf("%hu" , num >> pos & 1);
	pos = pos -1;
	i++;
	if(i<16)
		goto L1;

	printf("\n");

	r1 = num << (16-nbit);
	r2 = num >> nbit;

	num1 = r1 | r2;

//	printf("after rotation bits are:%hu\n", num1);


	L2:
	pos1 = pos1;
	printf("%hu" , num1 >> pos1 & 1);
	pos1 = pos1 -1;
	i1++;
	if(i1<16)
		goto L2;

	printf("\n");
}
