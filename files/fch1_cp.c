#include<stdio.h>
int main(int argc, char **argv)
{
	FILE *p,*q;
	p=fopen(argv[1], "r");
	q=fopen(argv[2], "w");
	char ch;
	while((ch=fgetc(p))!=EOF)
		fputc(ch, q);
}
