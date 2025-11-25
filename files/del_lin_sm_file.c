#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv)
{
	int i;
	FILE *p;
	p=fopen(argv[1],"r");
	int c=0,len,num,k=0,len2;
	num=atoi(argv[2]);
	char ch;
	while((ch=fgetc(p))!=EOF)
		c++; ///no of chars

	char *a=malloc(c+1);
	rewind(p);
	c=0,len=0,len2=0;

	//line by line storing into array
	while((ch=fgetc(p))!=EOF)
	{
		c++;//line legth count
		if(ch=='\n')
		{
			if(c>len)
				len=c;
			c=0;
		}

	}

	rewind(p);
	c=0;
	char s[len+1];
	while(fgets(s,sizeof(s),p))
	{
		c++;
		if(c!=num)
		{
			for(i=0;s[i];i++)
				a[k++]=s[i];
		}
	}
	a[k]='\0';
	fclose(p);
	p=fopen(argv[1],"w+");
	fputs(a,p);


}

