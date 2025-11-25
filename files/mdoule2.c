#include<stdio.h>
#include<stdlib.h>

struct student
{
	int roll_no;
	char *name;
	float marks;
};
int check(struct student **p);
void main(int argc , char **argv)
{
	int n=atoi(argv[2]);
	int i;
	FILE *fp=fopen(argv[1],"r");
	struct student *p[n];
	for(i=0;i<n;i++)
	{
		p[i]=malloc(sizeof(struct student));

		p[i]->name=malloc(20);


		fscanf(fp,"%d %s %f", &p[i]->roll_no, p[i]->name,&p[i]->marks);
	}
	int c=0;
//	for(i=0;i<n;i++)
//	{
	i=0;
	while(fscanf(fp,"%d %s %f", &p[i]->roll_no, p[i]->name,&p[i]->marks)==3)
	{
	if(check(&p[i]))
		c++;
	i++;
//	}
	}
	printf("count :%d\n", c);

}
int check(struct student **p)
{
	static int i=1,sum=0;
	int n=(*p)->roll_no;

	if(i<n)
	{
		if(n%i==0)
			sum=sum+i;

		i++;
		return check(p);
	}
	else
	{
		int r=(sum==n);
		i=1;
		sum=0;

		return r;
	}

}
