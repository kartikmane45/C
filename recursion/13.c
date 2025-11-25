#include<stdio.h>
int count(char *p, char ch);
int main()
{
	char s[100],*p,*q,ch;
	printf("enter string:");
	scanf("%[^\n]", s);
	printf("enter char:");
	scanf(" %c", &ch);

	p=s;

	int c=count(s,ch);
	printf("%d\n", c);
}
int count(char *p, char ch)
{
	static int c;
	/*
	while(*p)
	{
		if(*p==ch)
			c++;
		p++;
	}
	return c;
	*/
	if(*p !='\0')
	{
		if(*p==ch)
			c++;
			count(p+1,ch);
	}
	else
	{
		return c;
	}


}
