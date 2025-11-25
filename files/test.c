#include<stdlib.h>
#include<stdio.h>
int prime(int *p);
char* my_strchr(char **p, char ch);
void reverse(char **p);
void main(int argc , char **argv)
{
	if(argc!=2)
	{
		printf("usage: ./a.out file_name\n");
		return;
	}
	FILE *fp;
	fp=fopen(argv[1], "r");
	if(fp==0)
	{
		printf("file not found\n");
		return;
	}
	
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

	char *p;
	p=a;
	reverse(&p);
		printf("not\n");*/
	fp=fopen(argv[1], "w");
	fputs(a,fp);
}
void reverse(char **p)
{
	/*
	char *q,t;
	int len;
	while(q=my_strchr(*p,' '))
	{
		len=q-*p;
		if(prime(&len))
		{
			t=*p;
			*p=*q;
			**q=t;
			*p++;
			*q--;
		}
	p=q+1;

	}*/
	char *r=*p
	char *q=p;

	int len=0;
	while(*q)
	{
		++len
	}
}
int prime(int *p)
{
	static int i=1,c=0;
	if(i<=*p)
	{
		if(*p % i ==0)
			c++;
		
		i++;
		prime(p);
	}
	else
	{
		if(c==2)
		return 1;
		else
		return 0;
	}
}
char* my_strchr(char **p, char ch)
{
	while(**p)
	{
		if(**p==' ' || **p=='\n')
			return *p;
	*p++;
	}
	return 0;

}

