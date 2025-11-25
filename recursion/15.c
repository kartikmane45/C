#include<stdio.h>
void my_strcpy(char *p, char *q);
int main()
{
	char s[100],d[100]="hh",*p,*q,*r;
	printf("enter string:");
	scanf("%[^\n]",s);

	p=s;
	q=d;

	printf("before:%s\n", d);
	my_strcpy(p,q);
	printf("after:%s\n", d);
}
void my_strcpy(char *p, char *q)
{
	/*
	int i;
	for(i=0;p[i];i++)
		q[i]=p[i];
	q[i]='\0';
*/

	static int i=0;
	if(p[i]=='\0')
		return ;
	
	if(p[i]!='\0')
	{
		q[i]=p[i];
		i++;
		my_strcpy(p,q);
	}
	q[i]='\0';





}

