#include<stdio.h>
#include<stdlib.h>
struct stud 
{
	int roll;
	char name[50];
	float marks;
};
void palindromenum(int *roll, int *b);
void palindrome(struct stud ***p, int *n);
void memory(struct stud ***p, int n);
void main(int argc , char **argv)
{
	int i;
	int n=atoi(argv[1]);
	struct stud  **p;
	memory(&p,n);
	for(i=0;i<n;i++)
	{
		printf("enter details:");
		scanf("%d %s %f", &p[i]->roll, p[i]->name, &p[i]->marks);
	}
	for(i=0;i<n;i++)
	{
		int x=0,y=0,t;
		t=i;
		palindrome(&p,&t);
		palindromenum(&p[i]->roll,&y);
		x=t;
		if(x==1 && y==1)
		printf("%d %s %f\n", p[i]->roll, p[i]->name, p[i]->marks);
	}
}
void memory(struct stud ***p, int n)
{

	*p=malloc(sizeof(struct stud *)*n);

	for(int i=0;i<n;i++)
		(*p)[i]=malloc(sizeof(struct stud));

}
void palindrome(struct stud ***p, int *a)
{
	char *s=(*p)[*a]->name;
	int i=0,c=0,j;
	char *q;
	q=s;
	while(*q)
	{
		c++;
		q++;
	}
	c--;
	j=c;

	while(i<j)
	{
		if(s[i]!=s[j])
		{
			*a=0;
			return;
		}
		i++;
		j--;
	}
	*a=1;

}
void palindromenum(int *roll, int *b)
{
	int n=*roll;
	int rev=0,temp=n;

	while(temp>0)
	{
		rev=rev*10+temp%10;
		temp=temp/10;
	}
	if(rev==n)
	*b=1;
	else
	*b=0;
}

