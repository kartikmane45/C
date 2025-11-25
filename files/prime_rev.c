#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void my_del(char *p, char *q);
void my_rev(char *p,char *q);
char* my_strchr(char *p, char ch);
void  main(int argc, char **argv)
{
	if(argc!=2)
	{
		printf("usage: ./a.out file_name\n");
		return;
	}


	FILE *fp;
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file not found\n");
		return;
	}

	int i,c=0,len=0;
	char ch;
	while((ch=fgetc(fp))!=EOF)
			c++;
	char *a=malloc(c+1);
	rewind(fp);
	c=0,len=0;

	i=0;
	while((ch=fgetc(fp))!=EOF)
		a[i++]=ch;
	a[i]='\0';
	fclose(fp);

	char *p,*q;
	p=a;
/////////////////////////////////////////////////////
/*
	while(1)
	{
		if(q=my_strchr(p, ' '))
		{
		my_rev(p,q-1);
		p=a;
		}
		else if(q=my_strchr(p, '\n'))
		{
		my_rev(p,q-1);
		p=a;
		}
		else
		{
			break;
		}
//	p=p+strlen(p)-1;
	}*/
///////////////////////////////////////////////

	while(1)
	{
		q=my_strchr(p,' ');
		char *n=my_strchr(p, '\n');

		if(n && (!q || n<q))
			q=n;

		if(q)
			//my_rev(p,q-1);
			my_del(p,q+1);
		else
			//my_rev(p,p+strlen(p)-1);
		break;



		n = my_strchr(p, '\n');
		if(n)
			p=n+1;
		else
			break;
			p=n+1;
	}
	fp=fopen(argv[1],"w");
	fputs(a,fp);
}
char* my_strchr(char *p, char ch)
{
	while(*p)
	{
		if(*p==ch)
			return p;
	p++;
	}
	return 0;
}
void my_rev(char *p,char *q)
{
	int len=q-p;
	
	int i,c=0;
	for(i=1;i<=len;i++)
	{
		if(len % i ==0)
			c++;
	}
	if(c==2)
	{
	char t;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
	}
}
void my_del(char *p, char *q)
{
	while(*p++=*q++);
}
