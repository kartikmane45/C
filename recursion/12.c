#include<stdio.h>
void my_strrev(char *p, char *q);
int main()
{
	char s[100],*p,*q;
	printf("enter string:");
	scanf("%[^\n]", s);

	p=s;
	int c=0;
	while(*p)
	{
		p++;
	}
	q=p-1;

	my_strrev(s,q);
	printf("%s\n", s);
}
void my_strrev(char *p, char *q)
{
	char t;
/*
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
*/
	if(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		return my_strrev(p+1,q-1);
	}
	else
	{
		return 0;
	}




}
