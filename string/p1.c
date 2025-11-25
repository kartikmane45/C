#include<stdio.h>
void  my_rev(char *p, char *q);
char* my_strchr(char *p, char ch);
char* my_strlen(char *p);
int main()
{
	char s[100], *m,*q,*r,*k,*d;
	printf("enter string:");
	scanf("%[^\n]",s);
	m=s;

	while(q=my_strchr(m,' '))
	{
		for(k=q-1;k>=m;k--)
		{
			if(*k=='p' || *k=='P')
			{
				r=m;
				d=q-1;
				my_rev(r,d);
				break;
			}
		}
	m=q+1;

	}

	char *n=my_strlen(r);
	my_rev(m,n);



	printf("%s\n",s);
}
char* my_strlen(char *p)
{
	while(*p)
	{
		p++;
	}
	return p-1;
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
void  my_rev(char *p, char *q)
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
