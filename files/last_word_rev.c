#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void my_rev(char *p,char *q);
char* my_srd(char *p);
void my_del(char *p);
char* my_add(char *p);

void main(int argc, char **argv)
{
	if(argc!=2)
	{
		printf("usage: ./a.out file_name\n");
		return;
	}

	FILE *fp;
	fp=fopen(argv[1], "r");
	int c=0,len=0,k=0,i;
	char ch,*p;
	while((ch=fgetc(fp))!=EOF)
		c++;
	int d=c;
	char *a=malloc(c+1);
	rewind(fp);
	c=0;
	while((ch=fgetc(fp))!=EOF)
	{
		c++;
		if(ch=='\n')
		{
			if(c>len)
				len=c;
			c=0;
		}
	}
	rewind(fp);
	c=0;
	char s[len+1],*op=malloc(c+1);
	op[0]='\0';
	char *m,*n;
	while(fgets(s,sizeof(s),fp))
	{
		int l=strlen(s);
//		p=s;
	if(l>0 && s[l-1]=='\n')
		s[l-1]='\0';
		m=my_srd(s);
		n=my_add(m);

		my_rev(m,n);
		for(i=0;s[i]!='\0';i++)
			op[k++]=s[i];

			op[k++]='\n';
	}
	op[k]='\0';
	fclose(fp);
	FILE *q=fopen(argv[1],"w");
        fputs(op, q);
         fclose(q);
}
char* my_add(char *p)
{
	while(*p)
	{
		p++;
	}
	return p-1;
}
void my_rev(char *p,char *q)
{
	//char *q,t;
//	q=p;
//	while(*q)
//	q++;
//	q--;
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
char* my_srd(char *p)
{
	char *q;
	while(*p)
	{
		p++;
	}
	q=p-1;
	while(*q)
	{
		if(*q==' ')
			return q+1;
	q--;

	}
	return p-strlen(p);///for one word

}
/////deleting last word
void my_del(char *p)
{
	char *q=my_srd(p);
	if(q)
		*q='\0';
}














