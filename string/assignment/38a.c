#include<stdio.h>
const char* my_strchar(const char*, char);

int main()
{
	char s[100];
	const char *q,*p,*r;
	printf("enter string:");
	scanf("%[^\n]",s);
	int l=0;
	int len=0;
	p=s;
	while(q=my_strchar(p,' '))
	{
		len=q-p;
		if(len>l)
		{
			l=len;
			r=p;
		}
		p=q+1;
	}
	while(*r!=32)
	{
		printf("%c", *r);
		r++;
	}
	printf("\n");
}
const char* my_strchar(const char *k,char ch)
{
	while(*k)
	{
		if(*k == ' ')
			return k;
		k++;
	}
	return 0;
}
