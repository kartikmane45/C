#include<stdio.h>
int main()
{
	int num ,r1,r2,bit,pos,pos1;
	printf("enter an number:");
	scanf("%d",&num);

	pos1 =7;
	printf("%d", num >> pos1 & 1);
	pos1 =7;
	printf("%d", num >> pos1 & 1);
	pos1 =7;
	printf("%d", num >> pos1 & 1);
	pos1 =7;
	printf("%d", num >> pos1 & 1);
	pos1 =7;
	printf("%d", num >> pos1 & 1);
	pos1 =7;
	printf("%d", num >> pos1 & 1);
	pos1 =7;
	printf("%d", num >> pos1 & 1);
	pos1 =7;
	printf("%d", num >> pos1 & 1);
	printf("\n");

	printf("enter an position of from bit which you want to delte bits:");
	scanf("%d", &pos);
	printf("enter no of bits which you want to move:");
	scanf("%d", &bit);

	r1 = num << (32- pos );
	r1 = r1 >> (32- pos );

	r2 = num << pos + bit;
	r2 = r2 >> pos;
	
	num = r1 | r2 ;
	
	pos1 =7;
	printf("%d", num >> pos1 & 1);
	pos1 =7;
	printf("%d", num >> pos1 & 1);
	pos1 =7;
	printf("%d", num >> pos1 & 1);
	pos1 =7;
	printf("%d", num >> pos1 & 1);
	pos1 =7;
	printf("%d", num >> pos1 & 1);
	pos1 =7;
	printf("%d", num >> pos1 & 1);
	pos1 =7;
	printf("%d", num >> pos1 & 1);
	pos1 =7;
	printf("%d", num >> pos1 & 1);
	printf("\n");

	return 0;
}
