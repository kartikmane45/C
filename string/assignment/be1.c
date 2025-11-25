#include<stdio.h>
char* my_strstr(char *, char *);
int my_strlen(char *);
char* my_strcpy(char * , char *);
char* my_strchr(char *, char);
void my_strrev(char*,char*);
char* rev_strchr(char*, char);
void last_rev(char*);
int main()
{
	char s[100],f[100];
	printf("enter an string:");
	scanf("%[^\n]", s);
	printf("enter sub string:");
	scanf(" %[^\n]",f);
	char *p,*q,*d,*r,*n;
	p=s;
	q=f;
	int len;


	
	printf("p=%u\n", p);

	while(r=my_strstr(p,q))
	{
		d=my_strchr(r,' ');
		n=rev_strchr(r, ' ');
		my_strrev(n,d);
		last_rev(n);
		p=r;
	}
	printf("r=%u\n", p);
d=rev_strchr(r,' ');
	last_rev(d);
	

	printf("after:%s\n",s);

}
char* my_strstr(char *k, char *m)
{

	while(*k)
	{
		char *p=k;
		char *q=m;

		while(*p && *q && (*p==*q))
		{
			p++;
			q++;
		}
		if(*q=='\0')
			return k;

	k++;

	}
	return 0;
	
}
/*
   int my_strlen(char *j)
   {
   int i=0;
   for(i=*j;*j!=0;i++);

   return i;

   }
 */
char* my_strcpy(char *n, char *e)
{
	int i;
	for(i=0;n[i];i++)
		n[i]=e[i];

	n[i]='\0';
}
char* my_strchr(char *p, char ch)
{
	while(*p)
	{
		if(*p==' ')
			return p;
		p++;
	}
	return 0;

}
void my_strrev(char *p,char *q)
{
	char t;

	q--;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;

	}
}
char* rev_strchr(char *p, char ch)
{
	while(*p)
	{
		if(*p==' ')
			return p;
		p--;
	}

}
void last_rev(char *p)
{
	char t,*q;
	q=p;
	while(*q && *q!=32)
	q++;

	q--;

	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
}
