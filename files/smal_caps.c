#include<stdlib.h>
#include<stdio.h>
int main(int argc, char **argv)
{
	FILE *fp,*q;
	fp=fopen(argv[1], "r+");
	char s[10];

	int i;
	char ch;
	int c=0;
	while((ch=fgetc(fp))!=EOF)
		c++;

	char *p=malloc(c+1);
	rewind(fp);
	c=0;
	i=0;
	while((ch=fgetc(fp))!=EOF)
		p[i++]=ch;
	p[i]='\0';

	fclose(fp);
	for(i=0;p[i];i++)
	{
		if((p[0]>='a' && p[0]<='z') && (i==0))
			p[i]=p[i]-32;
		else if((p[i]==' ') || (p[i]=='\n'))
		{
			i++;
		if(p[i]>='a' && p[i]<='z')
			p[i]=p[i]-32;
		}
	}
	fp=fopen(argv[1],"w");
	fputs(p,fp);
}



















