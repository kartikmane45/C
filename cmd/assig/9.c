#include<stdio.h>
#include<string.h>

int my_atoi(const char *p);
int main(int argc, char **argv)
{

	int n=my_atoi(argv[2]);
	
	char ch = argv[3][0];

	char *s=argv[1];

	int len=strlen(argv[1]);
	int i;
	for(i=len;i>=n;i--)
	{
		s[i]=s[i-1];
	}
	s[n]=ch;
	
	for(i=0;s[i];i++)
	{
		printf("%c", s[i]);
	}
}
int my_atoi(const char *p)
{
	int i,num=0;
	if(p[0]=='+' || p[0]=='-')
		i=1;
	else
		i=0;
	for(;p[i];i++)
	{
		if(p[i]>=48 && p[i]<=57)
			num=num *10+p[i]-48;
		else
			break;
	}
	
	if(p[0]=='-')
		num=-num;
	
	return num;
}
