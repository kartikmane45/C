#include<stdio.h>
int main(int argc, char ** argv)
{
	FILE *p,*q,*r;
	p=fopen(argv[1],"r");
	q=fopen(argv[2],"r");
	r=fopen(argv[3],"w");
	char ch1,ch2;

while(1)
{
	/*
	ch1=fgetc(p);
	ch2=fgetc(q);
	
	if(ch1==EOF && ch2 == EOF)
		break;

	if(ch1!=EOF)
		fputc(ch1,r);
	if(ch2!=EOF)
		fputc(ch2,r);
*/
ch1=fgetc(p);
if(ch1!=EOF && ch1!='\n')
	fputc(ch1,r);
else if(ch2==EOF)
	break;
ch2=fgetc(q);
if(ch2!=EOF && ch2!='\n')
	fputc(ch2,r);
else if(ch1==EOF)
	break;
}


	















}
