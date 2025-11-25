// search and char and return its address if not then null
#include<stdio.h>
//char* char_srch(const char *, char);
int* char_srch(const char *, char);
int main()
{
	char s[20],*p,ch,*q;
	printf("enter string:");
	scanf("%s",s);
	printf("enter an ch:");
	scanf(" %c", &ch);

	p=s;
	q=char_srch(p,ch);
	if(q==0)
		printf("char not found %x\n", q);
	else
		printf("char found at %x\n", q);
}
//char* char_srch(const char *p, char ch)
int* char_srch(const char *p, char ch)
{
	int i;
	for(i=0;p[i];i++)
	{
		if(p[i]==ch)
			return p+i;
	}
	return 0; 
	
}
