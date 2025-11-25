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

	r=fopen(argv[2], "r");
	q=fopen(argv[1], "w");


	A *v[5];
	A *u[5], *y[5];

	for(i=0;i<5;i++)
		u[i]=(char*)malloc(100*sizeof(char));


	i=0;
	while(i<5 && fgets(u[i],100,r)!=NULL)
		i++;
int j;
	for(j=0;j<i;j++)
	fputs(u[j],q);
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
