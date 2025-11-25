#include<stdio.h>
int main(int argc, char **argv)
{
	FILE *p,*q;
	p=fopen(argv[1], "r");
	char ch;
	int c=0,d=0,e=0,i;
	char m[10];
	while((ch=fgetc(p))!=EOF)
	{
	if(ch=='\n')
		c++;
	}

	rewind(p);
	char s[10];
	while(fscanf(p,"%s",s)!=EOF)
	{
			d++;
	}
	rewind(p);
	char k[10];
	while(fscanf(p,"%s",k)!=EOF)
	{
		for(i=0;k[i];i++)
		{
			if(k[i]>='0' && k[i]<='9')
			e++;
		}
	}

	printf("lines:%d\n",c);
	printf("words:%d\n",d);
	printf("digit:%d\n",e);
}
