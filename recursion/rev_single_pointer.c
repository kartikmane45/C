#include<stdio.h>
void rev_str(char *p);
int main()
{
	char s[100],*p,*q,*r;
	printf("enter string:");
	scanf("%[^\n]", s);

	p=s;
	rev_str(p);
	printf("str==%s\n", s);

}
void rev_str(char *p)
{
/*	char t,*q;
	q=p;
	while(*q)
	{
		q++;
	}
	q--;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
*/

	static t ,*q;
	q=p;
	while(*q)
	{
		q++;
	}
	q--;

	if(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
		rev_str(p);
	}

	






}
