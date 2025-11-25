#include<stdio.h>
//char* my_strcpy(char*, char*);
void  my_strdel(char*, char*);
char* my_strchr(char* ,char);
int palin(char*, char*);
char*  mystr_len(char*);
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
			//	r=my_strchr(p, ' ');
			my_strdel(p,q+1);
			q=p-1;
			p=s;
		}
		p=q+1;
	}

	if(palin(p , mystr_len(p)))
		my_strdel(p,mystr_len(p)+1);


	printf("%s\n", s);

}
void  my_strdel(char *k, char *m)
{
	while(*k++=*m++);
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
