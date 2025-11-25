#include<stdio.h>
int my_strstr(char *, char *);
int my_strlen(char *);
void my_del(char *,char *);
//char* my_strcpy(char * , char *);
int main()
{
	char s[100],f[100];
	printf("enter an string:");
	scanf("%[^\n]", s);
	printf("enter sub string:");
	scanf(" %[^\n]",f);
	char *p,*q,*d,*r;
	p=s;
	q=f;
	int len;
	for(len=0;f[len];len++);



	int c=0;

	c=my_strstr(p,q);
	printf("count=%d\n", c);

}
void my_del(char *p, char *q)
{
	while(*p++=*q++);
}
int my_strstr(char *k, char *m)
{
	int c=0;
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
		{
			c++;;
		}

	k++;

	}
	return c;
	
}


