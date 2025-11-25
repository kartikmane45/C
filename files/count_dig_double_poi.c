#include<stdio.h>
#include<stdlib.h>
void countdigit(char **s, int *q);
void main(int argc, char **argv)
{
	FILE *fp=fopen(argv[1], "r");
	char ch;
	int i,line=0,c=0,l=0;
	
	while((ch=fgetc(fp))!=EOF)
	{
		c++;
		if(ch=='\n')
		{
			line++;
			if(c>l)
				l=c;
		c=0;
		}

	}

	rewind(fp);
	char **p=malloc(sizeof(char *)*(line+1));
	for(i=0;i<line;i++)
	{
		p[i]=malloc(sizeof(char)*(l+1));
		fgets(p[i],l+1, fp);
	}

	fclose(fp);
	int d;
	countdigit(p,&d);
	printf("count:%d\n", d);

}
void countdigit(char **s, int *q)
{
	int c=*q;
	int i ,j;
	for(i=0;s[i]!=NULL;i++)
	{
		j=0;
		while(s[i][j]!='\0')
		{
			if(s[i][j]>='0' && s[i][j]<='9')
				c++;
		
			j++;

		}
	}

	*q=c;


}
