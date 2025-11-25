#include<stdio.h>
#include<string.h>
char* my_stradd(char *p);
int main(int argc, char **argv)
{
	char *p=argv[1];
	char *s=argv[1];
	char *q=my_stradd(p);
	while(p<q)
	{
		char t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
	printf("%s\n",s);
	
}
char* my_stradd(char *p)
{

	while(*p)
	{
		p++;
	}
	return p-1;

}
