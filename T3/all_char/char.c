#include<stdio.h>
int main()
{
	unsigned char ch = 'e';
//	char ch = 'e';
	printf("char is e:%d\n", ch);

	ch = ch + 2;
	
	printf("char is e+ 3:%d\n", ch);

	ch = ch * 2;
	
	printf("char is e*2:%d\n", ch);

	return 0;
}
