#include<stdio.h>
int main()
{
	unsigned char ch, r1,r2, pos =7,pos1=7, i=0,i1=0;

	printf("enter an charter:");
	scanf("%c", &ch);

	L1:
	pos = pos;
	printf("%d", ch >> pos & 1);
	pos = pos -1;
	i++;
	if(i<8)
	goto L1;

	printf("\n");


	r1 = (ch << 4) | 0;  //1111 0000 |  00000000 == 11110000
	r2 = ~((ch >> 4) ^ (1 << 2));  //0000 0010 ^  00000100 == 00000010 
				       // 0000 0100  == 0000 0110
				       .
				       90
	ch = r1 | r2 ;

	printf("%hhu\n", ch);

	
	L2:
	pos1 = pos1;
	printf("%d", ch >> pos1 & 1);
	pos1 = pos1 -1;
	i1++;
	if(i1<8)
	goto L2;

	printf("\n");

	return 0;
}	
