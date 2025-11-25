#include<stdio.h>
#include<stdlib.h>
char* mystrstr(char *p, char *q);
void reverse(char *p);
int mystrlen(char *p);
#define St_SIZE 5
#define String_SIZE 25
struct india{
	char *str;
};
void main(int argc, char **argv)
{
	if(argc!=3)
	{
		printf("usage mesgae\n");
		return ;
	}

	FILE *fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file not found\n");
		return;
	}
	
	int c,i=0;
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
	
	char *p=argv[2];
	char *q=a;
	while((q=mystrstr(q,p))!=NULL)
	{
	reverse(q);
	q=q+mystrlen(p);
	}
	printf("%s", a);
	FILE *fd=fopen(argv[1], "w");
	fputs(a,fd);

}
char* mystrstr(char *p, char *q)
{
	while(*p)
	{
		char *k=p;
		char *m=q;

		while(*k && *m && (*k==*m))
		{
			k++;
			m++;
		}
		if(*m=='\0')
			return p;
		p++;
	}
	return 0;

}
void reverse(char *p)
{
	char *q=p;
	while(*q!=' ' && *q!='\0' && *q!='\n')
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
int mystrlen(char *p)
{
	int c=0;
	while(*p)
	{
		c++;
		p++;
	}
	return c;
}

















