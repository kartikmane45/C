#include<stdio.h>
void print_str(const char *);
int main()
{
	char s[20],*p;
	printf("enter string:");
	scanf("%s",s);

	p=s;
	print_str(p);

}
void print_str(const char *p)
{
//	printf("%s\n",p);
/*
	int i;
	for(i=0;p[i];i++)
	{
		printf("%c ",*(p+i));
	}
	*/

	while(*p)
	{
		printf("%c ", *p++);
		printf("\n");
	}


}
