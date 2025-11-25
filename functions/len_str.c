#include<stdio.h>
int len_char(const char *); // only one argumemt  beacuse it return length
int main()
{
	char s[20],*p;
	int len;
	printf("enter an string:");
	scanf("%[^\n]", s);

	p=s;
	len=len_char(p);
	printf("length is:%d\n", len);
}
int len_char(const char *p)
{
	int i;
	for(i=0;*(p+i);i++);

	return i;
}
