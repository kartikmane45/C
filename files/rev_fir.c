#include<stdio.h>
#include<stdlib.h>
#define St_SIZE 5
#define String_SIZE 25
struct india{char *str;};
void B_rev_name(struct india **p);
void main(int argc, char **argv)
{
	int i;
	if(argc!=2)
	{
		printf("usage mesgae\n");
		return ;
	}

	FILE *fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file not found\n");
		return;
	}
	
	struct india *p[St_SIZE];

	for(i=0;i<St_SIZE;i++)
	{
		p[i]=malloc(sizeof(struct india));
		p[i]->str=malloc(String_SIZE+1);
		fgets(p[i]->str,String_SIZE+1,fp);
	}
	
	printf("BEFORE::\n");	
	for(i=0;i<St_SIZE;i++)
	{
		printf("%s",p[i]->str);
	}
	fclose(fp);
//	char *k=argv[2];

	for(i=0;i<St_SIZE;i++)
	{
//	char *q=p[i];
	B_rev_name(&p[i]);
	}
	printf("after::\n");	
	for(i=0;i<St_SIZE;i++)
	{
		printf("%s",p[i]->str);
	}
	FILE *fd=fopen(argv[1], "w");	
	for(i=0;i<St_SIZE;i++)
	{
	fputs(p[i]->str,fd);
	}
}
void B_rev_name(struct india **p)
{
	char *k=(*p)->str;
	
	while(*k)
	{
		 while (*k == ' ')
        		    k++;
		if(*k=='\0')
			break;


		char *m=k;
		char *n=k;
		while(*n!=' ' && *n!='\0' && *n!='\n')
		{
			n++;
		}
		n--;
		
		while(m<n)
		{
			char t=*m;
			*m=*n;
			*n=t;
			m++;
			n--;

		}
//		while(*k!=' ' && *k!='\0' && *k!='\n')
//			k++;
return;
	}

}
















