#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int roll_no;
	char s[20];
	float marks;
}A;

int main(int argc, char **argv)
{
	int i;
	FILE *p,*q,*r;
	char s[100],d[100];

	int m,n;
	q=fopen(argv[1], "w");
	r=fopen(argv[2], "r");
	p=fopen(argv[3], "r");

	while(1)
	{
		m=fscanf(r,"%s",s);
		if(m==1)
		{
			fprintf(q,"%s ",s);
		}
		n=fscanf(p,"%s",d);
		if(n==1)
		{
			fprintf(q,"%s ",d);
		}

		if(m!=1 && n!=1)
			break;
	}
	char ch='\n';
	fprintf(q,"%c", ch);

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
