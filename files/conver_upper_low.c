#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//void insert(char *p,char *q, char *r);
//char* mystrstr(char *p,char *q);
int main(int argc, char **argv)
{
	if(argc!=2)
	{
		printf("usage: ./a.out file_name word replce_word\n");
		return 0;
	}

	int i;
	FILE *p;
	p=fopen(argv[1],"r");
//	char *q=argv[2];
//	char *r=argv[3];
	if(p==0)
	{
		printf("file not found\n");
		return 0;
	}
	int c=0,len,num,k=0,len2;
	char ch;
	while((ch=fgetc(p))!=EOF)
		c++; ///no of chars

	char *a=malloc(c+1);
	rewind(p);
	c=0,len=0,len2=0;

	
	i=0;
	while((ch=fgetc(p))!=EOF)
		a[i++]=ch;
	a[i]='\0';
	fclose(p);
//	printf("%s\n",a);
	for(i=0;a[i]!='\0';i++)
	{
		
		if(a[i]==' ' || a[i]=='\n')
//		{
		if(!((a[i-1]>='0' && a[i-1]<='9') && (a[i+1]>='0' && a[i+1]<='9')))
			{
			a[i-1]=a[i-1]-32;
			a[i+1]=a[i+1]-32;
			}
	//	}
	}
//	printf("%s\n",a);

	p=fopen(argv[1],"w");
	fputs(a,p);
//	p=fopen(argv[1],"w+");
//	fputs(a,p);


}
/*
char* mystrstr(char *p,char *q)
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

void insert(char *p,char *q, char *r)
{
	int i;
	int old_len=strlen(q);
	int new_len=strlen(r);
	while(1)
	{
		char *k=mystrstr(p,q);
		if(!k)
			return;

		int tail=strlen(k+old_len);
		if(new_len>old_len)
		{
			for(i=tail;i>=0;i--)
				k[new_len+i]=k[old_len+i];
		}
		else if(old_len>new_len)
		{
			for(i=0;i<=tail;i++)
				k[new_len+i]=k[old_len+i];	
		}
		for(int i=0;i<new_len;i++)
			k[i]=r[i];

	p=k+new_len;
	}
}
*/
















