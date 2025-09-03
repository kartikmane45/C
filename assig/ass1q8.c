#include<stdio.h>
int main()
{
	unsigned short int num, i=0, i1=0, pos=15, pos1=15, r1,r2,r3,r4, num1;

	printf("enter number:");
	scanf("%x", &num);

	L1:
	pos = pos;
	printf("%hu" , num >> pos & 1);
	pos = pos -1;
	i++;
	if(i<16)
		goto L1;

	printf("\n");

	//logic

	r1 = num & 0x000f;
	for(int a=0; a<=3; a++)
	{
	r1 = r1| (1 << a);
	}


	r2 = num & 0x00f0;
	for(int a=4; a<=7; a++)
	{
	r2 = r2&~(1 << a);
	}



	r3 = num & 0x0f00;
	for(int a=8; a<=11; a++)
	{
	r3 = r3 ^ (1 << a);
	}


	r4 = num & 0xf000;

	num1 = r1 |  r2 | r3 | r4;


	L2:
	pos1 = pos1;
	printf("%hu" , num1 >> pos1 & 1);
	pos1 = pos1 -1;
	i1++;
	if(i1<16)
		goto L2;

	printf("\n");


}
