#include<stdio.h>
char* my_stlen(char *p);
void revs(char *p, char *q);
void my_rev(char *p, char *q);
char* my_strchr(char *p, char ch);
int main()
{
	char s[100],*p,*q,*r,*n;
	printf("enter string:");
	scanf("%[^\n]", s);

	p=s;
	q=my_stlen(s);

	revs(p,q);
	
	r=p;
	while(n=my_strchr(r,' '))
	{
		my_rev(r,n-1);

	r=n+1;
	}
	
	n=my_stlen(p);
	my_rev(r,n);
	
	printf("%s\n",s);


}
void my_rev(char *p, char *q)
{
	while(p<q)
	{
		char t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
}
char* my_strchr(char *p, char ch)
{
	while(*p)
	{
		if(*p==ch)
			return p;
		p++;
	}
	return 0;
}
char* my_stlen(char *p)
{
	while(*p)
	{
		p++;
	}
	return p-1;
}
void revs(char *p, char *q)
{
	while(p<q)
	{
		char t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}

}
