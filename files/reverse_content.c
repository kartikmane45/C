#include<stdio.h>
#include<stdlib.h>
void reverse(char *p);
void main(int argc, char **argv)
{
	FILE *fp=fopen(argv[1], "r");
	int c=0,i=0;
	char ch;
	while((ch=fgetc(fp))!=EOF)
		c++;
	char *a=malloc(c+1);
	c=0;
	rewind(fp);
	while((ch=fgetc(fp))!=EOF)
		a[i++]=ch;
	a[i]='\0';

	fclose(fp);
 if (i > 0 && a[i-1] == '\n')
        a[i-1] = '\0';
	reverse(a);
	FILE *fd=fopen(argv[1], "w");
	fputs(a,fd);

}
void reverse(char *p)
{
	char *q=p;
	while(*q!='\0')
	{
		q++;
	}
	q--;
	while(p<q)
	{
		char t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
}


