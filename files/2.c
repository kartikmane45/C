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

	q=fopen(argv[1], "w");
	r=fopen(argv[2], "r");

int k;
	A *v[5];

	for(i=0;i<5;i++)
		v[i]=malloc(sizeof(A));

	for(i=0;i<5;i++)
	fscanf(r,"%d %s %f",&v[i]->roll_no, v[i]->s,&v[i]->marks);

	for(i=0;i<5;i++)
		fprintf(q,"%d %s %f\n",v[i]->roll_no,v[i]->s, v[i]->marks);
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
