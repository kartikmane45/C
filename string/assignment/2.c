#include<stdio.h>
int main()
{
	char *p, s[20];
	printf("enter string:");
	scanf("%s", s);


	int len;

	p=s;

	for(len=0;*(p+len);len++);

	printf("length of string is:%d\n",len);
}
