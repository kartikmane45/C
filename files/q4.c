#include<stdio.h>
int main(int argc, char **argv)
{
	FILE *p;
	p=fopen(argv[1], "r");

	int c;
	char s[20],ch;
	while((ch=fgetc(p))!=EOF)
	{
		if(ch!=' '  && ch!='\n')
		{
		c++;
		}
	else if(c>0)
	{
		printf("%d ", c);
		c=0;
	}
	}
	if(c>0)
		printf("%d", c);
}
