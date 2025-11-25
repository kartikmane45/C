#include<stdio.h>
char* my_strstr(char *p,char *q)
{
	char *s=p;
	while(*p!=32 && *p!='\0')
	{
		char *k=p;
		char *m=q;

		while(*k && *m && (*k==*m))
		{
			k++;
			m++;
		}
		if(*m=='\0')
			return s;
	p++;
	}
	return 0;
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
char* my_stradd(char *p)
{
	while(*p)
	{
		p++;
	}
	return p-1;
}
void my_del(char *p, char *q)
{
	while(*p++=*q++);
}
int main()
{
	char s[100],*p,*q,*r,d[20],*n;
	printf("enter string:");
	scanf("%[^\n]",s);
	printf("enter sub string:");
	scanf(" %[^\n]",d);

	p=s;

	while(q=my_strchr(p,' '))
	{
		if(r=my_strstr(p,d))
		{
			///my_rev(r,q-1);

			//for delete 
			my_del(r,q);
			p=s;
			q=r-1;

		}
	
			p=q+1;
	}
	n=my_stradd(p);
	while(*p)
	{
		if(r=my_strstr(p,d))
		{
		//	my_rev(r,n);
		my_del(r,n+1);
		}
		p++;
	}

	printf("%u %u---> %s\n", p,r, s);




}

