#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define St_SIZE 5
#define String_SIZE 25
struct india{char *str;};
void B_rev_name(struct india **p, char *s, char *t);
void main(int argc, char **argv)
{
	int i;
	if(argc!=4)
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
	
	struct india *p[St_SIZE];

	for(i=0;i<St_SIZE;i++)
	{
		p[i]=malloc(sizeof(struct india));
		p[i]->str=malloc(String_SIZE+1);
		fgets(p[i]->str,String_SIZE+1,fp);
	}
	
	printf("BEFORE::\n");	
	for(i=0;i<St_SIZE;i++)
	{
		printf("%s",p[i]->str);
	}
	fclose(fp);
	char *k=argv[2];
	char *m=argv[3];

	for(i=0;i<St_SIZE;i++)
	{
//	char *q=p[i];
	B_rev_name(&p[i],k,m);
	}
	printf("after::\n");	
	for(i=0;i<St_SIZE;i++)
	{
		printf("%s",p[i]->str);
	}
	FILE *fd=fopen(argv[1], "w");	
	for(i=0;i<St_SIZE;i++)
	{
	fputs(p[i]->str,fd);
	}
}
void B_rev_name(struct india **p, char *s, char *t)
{
	char *k=(*p)->str;
//	char *l=k;
	while(*k)
	{
		char *m=k;
		char *n=s;

		while(*m && *n && (*m== *n))
		{
			m++;
			n++;
		}
		if(*n=='\0')
		{
			int old=strlen(s);
			int new=strlen(t);

			int tail=strlen(k+old);

			if(new>old)
			{
			for(int i=tail;i>=0;i--)
				k[new+i]=k[old+i];
			}
			else if(new<old)
			{
			for(int i=0;i<=tail;i++)
				k[new+i]=k[old+i];
			}

			for(int i=0;i<new;i++)
				k[i]=t[i];
		}
		else
		{
		k++;
		}
	}
}
















