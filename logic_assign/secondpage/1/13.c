#include<stdio.h>
int main()
{
	unsigned int num, pos, bit, r1, r2;
	printf("enter an number:");
	scanf("%d" ,&num);

	printf("enter an position:");
	scanf("%d", &pos);

	printf("enter an no.of bit:");
	scanf("%d", &bit);


	r1 = num << (32 - pos);
	r1 = r1 >> (32 - pos);

	r2 = num >> (pos+bit);
	r2 = r2 <<  pos;

	num = r1 | r2;
	

	printf("after setting a bit number is:%d\n", num);
}
