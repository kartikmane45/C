#include<stdio.h>
void my_rev(char *p, char *q);
int main()
{
	char s[100],*p,*q,*r;
	printf("enter string:");
	scanf("%[^\n]", s);

	p=s;
	while(*p)
	{
		p++;

	}
	q=p-1;
	while(*q!=32)
	{
	q--;
	
	}
	r=q+1;
	my_rev(r,p-1);
	printf("after reversing last string:%s\n", s);

}
void my_rev(char *p, char *q)
{
	if(p<q)
	{

		char t=*p;
		*p=*q;
		*q=t;

		my_rev(p+1, q-1);
	}
	else
	{
		return ;
	}
}


