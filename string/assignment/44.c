#include<stdio.h>
char* my_strstr( char *, char *);
int main()
{
	char s[200],d[200];
	const char *p,*q,*r;
	printf("enter string:");
	scanf("%[^\n]",s);
	printf("enter string:");
	scanf(" %[^\n]",d);
	
	int l=0,len=4;
	p=s;	
	q=d;
	int c;
	c=my_strstr(s,d);
	if(c)
		printf("yes\n");
	else
		printf("no\n");

}
char* my_strstr(char *k, char *m)
{
	while(*k)
	{
		if(*k==*m)
			return k;
		k++;
	}
	return 0;
}
