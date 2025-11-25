#include<stdio.h>
int main(int argc , char **argv)
{
	FILE *p;
	p=fopen(argv[1], "r+");
	int c=0;
	char ch;
	while((ch=fgetc(p))!=EOF)
	{
		if(ch>='A' && ch <='Z')
			ch=ch+32;

		c=ftell(p);
		fseek(p,c-1,SEEK_SET);
		fputc(ch,p);
	}
}
