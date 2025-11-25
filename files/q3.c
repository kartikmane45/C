#include<stdio.h>
int main(int argc , char **argv)
{
	FILE *p;
	p=fopen(argv[1], "r");
	int c=0;
	char s[200];
	while(fgets(s,sizeof(s),p)!=NULL)
	{
	c++;
	}
	printf("%d\n",c);
}
