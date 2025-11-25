#include<stdio.h>
char* my_strcpy(char*, char*);
char* my_strchr(char* ,char);
int palin(char*, char*);
char* mystr_len(char*);
int main()
{
	char s[100],*p,*q,*r,*n,*l;
	char i,j;
	printf("enter an string:");
	scanf("%[^\n]", s);
	p=s;

	while(q=my_strchr(p,' '))
	{
		if(palin(p,q-1))
		{
			my_strcpy(p,q+1);
			p=s;
			q=p-1;

		}
		p=q+1;
	}

	l=mystr_len(p);
	if(palin(p,l))
		my_strcpy(p,l+1);

	printf("%s\n", s);

}
char* my_strcpy(char *k, char *m)
{
	int i;
	for(i=0;k[i];i++)
		k[i]=m[i];

	k[i]='\0';
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
int palin(char *p,char *q)
{
	while(p<q)
	{
		if(*p!=*q)
			return 0;
		p++;
		q--;
	}
	return 1;
}
char* mystr_len(char *p)
{
	int c=0;
	while(*p)
	{
		c++;
		p++;
	}
	return p-1;
}
