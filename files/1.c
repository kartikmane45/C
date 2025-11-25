#include<stdio.h>
int main(int argc, char **argv)
{
	FILE *p;
	int c=0;
	p=fopen(argv[1], "r");
//	printf("%d\n", fp);
char s[100];
	while(fgets(s,sizeof(s),p))
	{
			c++;
	}
	printf("%d\n",c);
}
