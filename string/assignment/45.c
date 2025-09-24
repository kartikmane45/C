#include<stdio.h>
char* my_strstr( char *, char *);
int main()
{
	char s[200],d[200];
	const char *p,*q,*r;
	printf("enter string:");
	scanf("%[^\n]",s);
	printf("enter string:");
	scanf("%s",d);
	
	int l=0,len=4;
	p=s;	
	q=d;
	int c;
	c=my_strstr(s,d);
	printf("count=%d\n",c);

}
char* my_strstr(char *k, char *m)
{
	int c=0;
	while(*k)
	{
		//c++;
		if(*k==*m)
			c++;
		k++;
	}
	return c;
}
