#include<stdio.h>
int main()
{
	char *p, s[20];
	printf("enter string:");
	scanf("%[^\n]", s);


	int len,i,c=0;

	p=s;

	for(len=0;*(p+len);len++);


	printf("asc=%d, hex=%x, octal=%x\n", s,s,s);
}
