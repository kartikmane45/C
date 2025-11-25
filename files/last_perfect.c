#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define St_SIZE 5
#define String_SIZE 25
struct india{char *str;};
void B_rev_name(struct india **p);
int perfect(int *p);
void main(int argc, char **argv)
{
	int i;
	if(argc!=2)
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
//	char *k=argv[2];
//	char *m=argv[3];

	for(i=0;i<St_SIZE;i++)
	{
//	char *q=p[i];
	B_rev_name(&p[i]);
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
void B_rev_name(struct india **p)
{
	char *k=(*p)->str;
	while(k)
	{
		if(*k=='\0')
			break;
	char *q;
	while(*k!='\n')
	{
		q++;
	}
	char *m=--q;
	while(*q==' ')
	{
		q--;
	}
	int len=m-q;

	if(perfect(&len))
	{
		char t=*q;
		*q=*m;
		*m=t;
		q++;
		m--;
	}

	


	k++;
	}


}
int perfect(int *p)
{
	static int i=1, sum=0;
	int n=*p;
	if(i<n)
	{
		if(n%i==0)
		{
			sum=sum+i;
			i++;
		}
		return perfect(p);
	}
	else
	{
		int r=(sum==n);
		int i=1;
		sum=0;
		return r;
	}
}
	














