#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll_no;
	char name[20];
	float marks;
}S;
void main(int argc, char **argv)
{
	S v;
	if(argc!=2)
	{
		printf("uagase: ./a.out n file_name\n");
		return;
	}
	FILE *fp=fopen(argv[1],"r+");
	FILE *f=fopen("temp.txt","w");
	char s[100];
	int i;
//	for(i=0;i<3;i++)
		s[i]=(char*)malloc(100*sizeof(char));

	i=0;
	while(fgets(s,100,fp)!=NULL)
		i++;

	printf("%s",s[0][1]);


	

//	fprintf(p, "%d %s %f",v->roll_no,v->name,v->marks);
//	fprintf(p, "%d %s %f",v.roll_no,v.name,v.marks);
	


}
void checkvowel(struct st***, int *)
{


}
