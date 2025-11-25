#include<stdio.h>
#include<stdlib.h>
/*
typedef struct student
{
	int roll_no;
	char s[20];
	float marks;
}A;
*/
char* my_strchr(char *p,char ch);
void my_del(char *p, char *q);
int main(int argc, char **argv)
{
	int i;
	FILE *p,*q,*r;
	char s[100],d[100];

	char *m ,*n;
	
	p=fopen(argv[1], "r");
	q=fopen(argv[2], "r");
	r=fopen(argv[3], "w");
	int l=0;
	while(1)
	{
		m=fgets(s,100,p);
		if(m)
		{
			fputs(s,r);
		}
		n=fgets(d,100,q);
		if(n)
		{
			fputs(d,r);
		}

		if(!m && !n)
			break;
	}
//	char ch='\n';
//	fprintf(q,"%c", ch);

}
char* my_strchr(char *p,char ch)
{
	while(*p)
	{
		if(*p==ch)
			return p;
		p++;
	}
}
void my_del(char *p, char *q)
{
	while(*p++=*q++);
}


































/* arrray

	int s[5]={10,20,30,40,50};
	int d[5],i;

	for(i=0;i<5;i++)
	fprintf(p,"%d ",s[i]);
	rewind(p);
	for(i=0;i<5;i++)
	fscanf(p,"%d ",&d[i]);
	for(i=0;i<5;i++)
	fprintf(q,"%d ",d[i]);
	
	for(i=0;i<5;i++)
	printf("%d\n",d[i]);
	*/
